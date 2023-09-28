#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
void main()
{
  int pid= fork();
  if(pid<0)
  printf("the parent process  is %d,",pid);
}