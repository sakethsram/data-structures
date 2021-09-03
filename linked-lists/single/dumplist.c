#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

extern struct student *h;
int dumplist()
{
	struct student *t;
	int i = 0;

	for(i = 1; i <= 20; i++)
		printf("%5d", i);

	printf("\n");

	for(t = h; t != NULL; t = t->next)	
		printf("%5d", t->no);

	printf("\n");
	printf("\n");
}
