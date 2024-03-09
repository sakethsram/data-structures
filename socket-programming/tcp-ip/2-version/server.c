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

int main() {
    int server_socket, client_socket;
    struct sockaddr_in server_address, client_address;
    socklen_t client_address_length = sizeof(client_address);
    char buffer[BUFFER_SIZE];

    // Create socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket < 0) {
        perror("Error opening socket");
        exit(EXIT_FAILURE);
    }

    // Clear address structure
    memset(&server_address, 0, sizeof(server_address));

    // Set address family, port, and IP
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = INADDR_ANY;
    server_address.sin_port = htons(PORT);

    // Bind the socket to the address
    if (bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address)) < 0) {
        perror("Error binding socket");
        exit(EXIT_FAILURE);
    }

    // Listen for incoming connections
    if (listen(server_socket, 5) < 0) {
        perror("Error listening on socket");
        exit(EXIT_FAILURE);
    }

    printf("Server is listening for connections...\n");

    // Accept connections from clients
    client_socket = accept(server_socket, (struct sockaddr *)&client_address, &client_address_length);
    if (client_socket < 0) {
        perror("Error accepting connection");
        exit(EXIT_FAILURE);
    }

    printf("Connected by %s:%d\n", inet_ntoa(client_address.sin_addr), ntohs(client_address.sin_port));

    // Receive data from client
    ssize_t bytes_received;
    while ((bytes_received = recv(client_socket, buffer, BUFFER_SIZE, 0)) > 0) {
        // Send received data back to client
        send(client_socket, buffer, bytes_received, 0);
        printf("Received: %s\n", buffer);
    }

    if (bytes_received == 0) {
        printf("Client disconnected.\n");
    } else if (bytes_received < 0) {
        perror("Error receiving data from client");
    }

    close(client_socket);
    close(server_socket);

    return 0;
}
