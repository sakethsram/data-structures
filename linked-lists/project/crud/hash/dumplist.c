#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

extern struct student *h[28];
int dumplist()
{
	struct student *t;
	int i = 0,hkey;
	for(hkey=0;hkey<=28;hkey++)
	{
		if(h[hkey]!=NULL)
		{		
			for(t = h[hkey]; t != NULL; t = t->next)	
				printf("%s , ",t->name);
			printf("\n");
		}
	}
	printf("\n");
}
