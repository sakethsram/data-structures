#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
    int t, n=5,i;
    for(i=0;i<n;i++)
    {
        t=fork();
        if(t==0)
            break;            
    }
    sleep(100);
   
}

