#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 12345
#define BUFFER_SIZE 1024

int main() 
{
    int client_socket;
    struct sockaddr_in server_address;
    char buffer[BUFFER_SIZE];

    // Create socket
    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket < 0) {
        perror("Error opening socket");
        exit(EXIT_FAILURE);
    }

    // Clear address structure
    memset(&server_address, 0, sizeof(server_address));

    // Set address family, port, and IP
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
    server_address.sin_port = htons(PORT);

    // Connect to server
    if (connect(client_socket, (struct sockaddr *)&server_address, sizeof(server_address)) < 0) {
        perror("Error connecting to server");
        exit(EXIT_FAILURE);
    }

    // Send data to server
    printf("Enter message to send: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    send(client_socket, buffer, strlen(buffer), 0);

    // Receive data from server
    ssize_t bytes_received = recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("Received: %s\n", buffer);

    close(client_socket);

    return 0;
}
