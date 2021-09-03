#include "defs.h"
#include "stdio.h"
extern struct student *h;
int midval()
{
	struct student *t=h;
	int i=1;
	int j = 0;
	while (t-> next != NULL)
	{
		t=t->next;
		i++;
	}
	for( i=1,t=h ; t->next!=NULL; i++,t=t->next ) ;
	printf(" \n1. i = %d",i);
	j = get_node_value_by_pos(i);
	printf("\n  midvalue = %d \n",j);
}
