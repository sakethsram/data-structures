#include "defs.h"
#include "stdio.h"

extern struct student *h;
int get_node_value_by_pos(int pos)
{
	int i=0;
	struct student *t=h;
	for(i=1,t=h;i!=pos;t=t->next,i++);
	printf("\n val= %d\n",t->no);
	return (t->no);
}	
