#include "defs.h"
#include "stdio.h"
extern struct student *h;

int update_node_by_val(int ov,int nv)
{
	struct student  *t=h;
	int i;
	t=h;
	while(t->next != NULL)
	{
			if(t->no==ov)
			{
				t->no=nv;
				return (t->no);
			}
			t=t->next;
	}
	printf("\n the given value of %d was not present ",ov);
}	
