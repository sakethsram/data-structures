#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int main()
{
    int i=1,t=0;
    printf("\n before increamenting \n value :%d address = %p\n",t,&t);
    
    for(t=1;t<=10;t++);
    printf("\n after increamenting \n value :%d address = %p\n",t,&t);
    sleep(1);


}    