#include "stdio.h"
#include "stdlib.h"
extern struct student 
int dumplist()
{
	struct student *t;
	for(t = h; t != NULL; t = t->next)	
		printf("%5d", t->no);

	printf("\n");
}
