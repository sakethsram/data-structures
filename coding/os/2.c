#include <stdio.h>
#include <unistd.h>

int main()
{
    printf(" intitial parent  :::by -> processID: %d, parentID: %d\n", getpid(), getppid());
    fork();
    fork();
    fork();
    printf("by -> processID: %d, parentID: %d\n", getpid(), getppid());
    sleep(10);
    return 0;
}

