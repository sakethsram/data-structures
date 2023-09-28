#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
void main()
{
  int pid;
  pid = fork();
  if(pid==0)
  {
    printf("i am child,process id is %d \n",getpid());
    printf("i am parent ,process id is %d \n",getppid());
  }  
  else
  {
    printf("i am child,process id is %d \n",getpid());
    printf("i am parent ,process id is %d \n",getppid());    
  }
}