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

    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&server_address, 0, sizeof(server_address));
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
    server_address.sin_port = htons(PORT);

    if (connect(client_socket, (struct sockaddr *)&server_address, sizeof(server_address)) == -1) {
        perror("Connection failed");
        exit(EXIT_FAILURE);
    }

    // Send data to the server
    char data[][128] = {"hello\n", "how are you\n", "where are you\n", "bye\n"};
    int dlen = sizeof(data) / sizeof(data[0]);
    for (int i = 0; i < dlen; i++) {
        if (send(client_socket, data[i], strlen(data[i]), 0) == -1) {
            perror("Send failed");
            exit(EXIT_FAILURE);
        }
    }

    // Receive data from the server
    ssize_t bytes_received;
    while ((bytes_received = recv(client_socket, buffer, BUFFER_SIZE, 0)) > 0) {
        buffer[bytes_received] = '\0';
        printf("Server: %s\n", buffer);
    }

    if (bytes_received == -1) {
        perror("Receive failed");
        exit(EXIT_FAILURE);
    }

    close(client_socket);
    return 0;
}
