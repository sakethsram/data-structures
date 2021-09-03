#include "defs.h"
#include "stdio.h"
extern struct student *h;
int insert_node_by_pos(int val,int pos)
{
	int i=0;
	struct student *t=h;
	for(t=h; t->no != pos && t->next != NULL; t = t->next);
	if(t->no == pos)
	{
		t->no=val;
		return 1;
	}
	if(t->next==NULL)
	{
		printf("\nthere is no position of %d\n",pos);
		return 0;
	}	
}	
