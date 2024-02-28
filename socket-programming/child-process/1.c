#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void t1(void)
{
    while (1)
    {
        printf("\nhi");
        sleep(1);
    }    
}

void t2(void)
{
    while (1)
    {
        printf("\nhello");
        sleep(1);
    }    
}

int main()
{
    int pid1, pid2;

    pid1 = fork();
    if (pid1 == 0) 
        t1();
    pid2 = fork();
    if (pid2 == 0) 
        t2();      
    return 0;
}

