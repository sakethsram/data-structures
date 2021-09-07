#include "stdio.h"
#include "defs.h"
#include "stddef.h"
#include "stdlib.h"
extern struct student *h[4];
void dumplist(void)
{
	struct student *t;
	int i = 0;
	for(i = 1; i <= 20; i++)
		printf("%5d", i);
	printf("\n");
	for(i=0;i<=4;i++)
	{
		for(t = h[i]; t != NULL; t = t->next)	
			printf("%5d", t->no);
	}
		printf("\n");
}	

