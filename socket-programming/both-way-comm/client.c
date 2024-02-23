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
    int client_socket;
    struct sockaddr_in server_address;
    char buffer[BUFFER_SIZE];

    client_socket = socket(AF_INET, SOCK_STREAM, 0);

    memset(&server_address, 0, sizeof(server_address));
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
    server_address.sin_port = htons(PORT);

    connect(client_socket, (struct sockaddr *)&server_address, sizeof(server_address));

    printf("Enter message to send: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    send(client_socket, buffer, strlen(buffer), 0);

    ssize_t bytes_received = recv(client_socket, buffer, BUFFER_SIZE, 0);
    buffer[bytes_received] = '\0';

    for (int i = 0; i < bytes_received; i++) 
        buffer[i] = toupper(buffer[i]);

    send(client_socket, buffer, bytes_received, 0);

    printf("Capitalization message sent back to server(from client): %s\n", buffer);

    close(client_socket);

    return 0;
}
