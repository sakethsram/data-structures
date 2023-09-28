#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
void main()
{
  printf("run the ps -el command\n");
  sleep(50);
  printf("run the ps command -el once more\n");
  for( ; ;);
}  