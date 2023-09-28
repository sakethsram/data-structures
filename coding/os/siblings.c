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
    for(i=0;i<=2;i++)
    {
        if(t==0)
        {
            //child
            //printf("C: t: %d, pid: %d, ppid: %d\n",t, getpid(), getppid());
            //t=fork();

         }
        else
        {
            //parent
            //printf("P: t: %d, pid: %d, ppid: %d\n",t, getpid(), getppid());
            t=fork();

        }
    } 
00    printf("End: PID :%d, PPID :%d\n", getpid(), getppid());
    sleep(50);
}