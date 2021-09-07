#include "stdio.h"
#include "defs.h"
#include "stddef.h"
#include "stdlib.h"
extern struct student *h[4];
int getcount()
{
	int i=0,y=0;
	struct student *t=h[4];

	for(i=0;i<=4;i++)
	{
		t=h;
		for(t=h[i];t!=NULL;t=t->next,y++);
		printf("\n node number = %d \n \n count = %d \n ",i,y);
		y=0;
	}
}	

