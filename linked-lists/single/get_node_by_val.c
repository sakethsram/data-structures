#include "defs.h"
#include "stdio.h"

extern struct student *h;
int posbyval(int v)
{
	int i=0;
	struct student *t=h;
	for(i=1,t=h;t->no!=v;t=t->next,i++);
	printf(" \n position = %d \n",i);
	return i;
}
