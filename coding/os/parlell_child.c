
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int main()
{
    int i=1,t=0;
    printf("P: PID :%d, PPID :%d\n", getpid(), getppid());
    sleep(2);

    t=fork();
    while(t == 0 && i <= 10)
    {   
        t = fork();
        i++;
    }

    printf("End: PID :%d, PPID :%d\n", getpid(), getppid());
    sleep(50);
}