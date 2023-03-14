#include "defs.h"
#include "stdio.h"
extern struct student *h[28];
int insert_node_by_pos(int val,int pos)
{
	int i=0,hkey;
	hkey= alindex(val);
	struct student *t=h[hkey];
	for(t=h[hkey]; t->rno != pos && t->next != NULL; t = t->next);
	if(t->rno == pos)
	{
		t->rno=val;
		return 1;
	}
	if(t->next==NULL)
	{
		printf("\nthere is no position of %d\n",pos);
		return 0;
	}	
}	
