#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int main()
{
    int i=1,t=0;   
    for(i=0;i<=2;i++)
    {
        if(t==0)
        {
            printf("C: t: %d, pid: %d, ppid: %d\n",t, getpid(), getppid());
            t=fork();
        }
       
    } 
    sleep(20);
}