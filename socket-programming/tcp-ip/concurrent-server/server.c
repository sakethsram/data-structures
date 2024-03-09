#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <ctype.h>

#define PORT 12345
#define BUFFER_SIZE 1024

void concurrent(int nfd)
 {
    char buffer[BUFFER_SIZE];
    ssize_t bytes_received;

    while ((bytes_received = recv(nfd, buffer, BUFFER_SIZE, 0)) > 0) 
    {
        buffer[bytes_received] = '\0';
        printf("Client: %s\n", buffer);

        if (strncmp(buffer, "bye", 3) == 0)
            break;

        for (int i = 0; i < bytes_received; i++)
            buffer[i] = toupper(buffer[i]);
        

        if (send(nfd, buffer, bytes_received, 0) == -1)
        {
            perror("Send failed");
            exit(EXIT_FAILURE);
        }
    }

    if (bytes_received == -1) 
    {
        perror("Receive failed");
        exit(EXIT_FAILURE);
    }

    close(nfd);
}

int main() 
{
    int server_socket, nfd,t;
    struct sockaddr_in server_address, client_address;
    socklen_t client_address_len = sizeof(client_address);

    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) 
    {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&server_address, 0, sizeof(server_address));
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = INADDR_ANY;
    server_address.sin_port = htons(PORT);

    if (bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address)) == -1)
     {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    if (listen(server_socket, 5) == -1) 
    {
        perror("Listen failed");
        exit(EXIT_FAILURE);
    }

    while (1) 
    {
        nfd = accept(server_socket, (struct sockaddr *)&client_address, &client_address_len);
        
        if (nfd == -1) 
        {
            perror("Accept failed");
            exit(EXIT_FAILURE);
        }
        t=fork();
        if(t==0)
        {
            concurrent(nfd);
            exit(1);
        }
        close(nfd);
    }
    close(server_socket);
    return 0;
}
