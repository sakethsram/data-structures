#include "defs.h"
#include "stdlib.h"
#include "stdio.h"

extern struct student *h;
int get_count ()
{
	struct student *t;
	int i=0;
	t=h;
	while(t != NULL)
	{
		t=t->next;
		i++;
	}
	printf("Node count :%d\n",i);
}

