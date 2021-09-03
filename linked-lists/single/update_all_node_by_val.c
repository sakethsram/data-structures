#include "defs.h"
#include "stdio.h"
extern struct student *h;

int update_all_node_by_val(int ov, int nv)
{
	struct student  *t=h;
	int i=0;
	t=h;
	while(t->next!=NULL)
	{
			if(t->no==ov)
			{
				t->no=nv;
				i++;
			}	
			t=t->next;
	}
	if(i==0)
	{
		printf("\n the given value of %d was not present ",ov);
		return 0;
	}	
	printf("\n the given value of %d was  present %d times ",ov,i);
	return i;
}	
