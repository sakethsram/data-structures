#include <stdio.h>
#include <unistd.h>
void pA(void)
{
    int i=0;
    for (i=0;i<=100;)
    {
        printf("\n---------------------------------------------------------------\n");

        printf("in hi -> processID: %d, parentID: %d\n", getpid(), getppid());
        sleep(1);    
    }

}

void pB(void)
{
    int i = 0;
    for (i = 0; i <= 100;)    
    {
        printf("in bye  :-> processID: %d, parentID: %d\n", getpid(), getppid());
        sleep(1);    
    }
}    

int main()
{
    int t1 = 0, t2 = 0;
    t1 = fork();
    if (t1 != 0)
        pA();
    t2 = fork();
    if (t2 != 0)
        pB();
    
    printf("in main() :-> processID: %d, parentID: %d\n", getpid(), getppid());

    return 0;
}
