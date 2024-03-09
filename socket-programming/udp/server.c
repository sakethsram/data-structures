#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 8080
#define MAX_BUFFER_SIZE 1024

int main() 
{
    struct sockaddr_in serveraddr, clientaddr;
    int sockfd, clientlen, recvbytes;
    char buffer[MAX_BUFFER_SIZE];

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    memset(&serveraddr, 0, sizeof(serveraddr));
    memset(&clientaddr, 0, sizeof(clientaddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);
    serveraddr.sin_port = htons(PORT);
    bind(sockfd, (const struct sockaddr *)&serveraddr, sizeof(serveraddr));
    while (1) 
    {
        clientlen = sizeof(clientaddr);
        recvbytes = recvfrom(sockfd, (char *)buffer, MAX_BUFFER_SIZE, 0, (struct sockaddr *)&clientaddr, &clientlen);
        buffer[recvbytes] = '\0';
        printf("Message from client: %s\n", buffer);
        sendto(sockfd, (const char *)"hi", strlen("hi"), 0, (const struct sockaddr *)&clientaddr, clientlen);
    }
    close(sockfd);
    return 0;
}
