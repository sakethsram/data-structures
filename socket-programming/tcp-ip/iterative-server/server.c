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

int main() 
{
    int server_socket, client_socket;
    struct sockaddr_in server_address, client_address;
    socklen_t client_address_len = sizeof(client_address);
    char buffer[BUFFER_SIZE];

    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&server_address, 0, sizeof(server_address));
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = INADDR_ANY;
    server_address.sin_port = htons(PORT);

    if (bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address)) == -1) {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    if (listen(server_socket, 5) == -1) {
        perror("Listen failed");
        exit(EXIT_FAILURE);
    }

    while (1)
    {    
        client_socket = accept(server_socket, (struct sockaddr *)&client_address, &client_address_len);
        if (client_socket == -1) {
            perror("Accept failed");
            exit(EXIT_FAILURE);
        }

        ssize_t bytes_received;
        while ((bytes_received = recv(client_socket, buffer, BUFFER_SIZE, 0)) > 0) 
        {
            buffer[bytes_received] = '\0';
            printf("Client: %s\n", buffer);

            if (strncmp(buffer, "bye", 3) == 0)           
                break;

            // Example processing: convert received data to uppercase
            for (int i = 0; i < bytes_received; i++) {
                buffer[i] = toupper(buffer[i]);
            }

            if (send(client_socket, buffer, bytes_received, 0) == -1) {
                perror("Send failed");
                exit(EXIT_FAILURE);
            }
        }

        if (bytes_received == -1) {
            perror("Receive failed");
            exit(EXIT_FAILURE);
        }

        close(client_socket);
    }

    close(server_socket);
    return 0;
}
