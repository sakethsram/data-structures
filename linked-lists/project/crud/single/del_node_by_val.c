#include "stdio.h"
#include "stdlib.h"
#include "defs.h"
extern  struct student *h;
int del_node_by_val(int v)
{
	struct student *t=h;
	struct student *p=h;
	if(h->rno==v)
	{
		h=t->next;
		free(t);
		return 0;
	}
	for(t=h->next ; t->next!=NULL ; t=t->next )
	{
		if( t->rno == v )
		{
			p->next = t->next ;
			t->next = NULL ;
			free(t);
			return 0;
		}
		p=t;		
	}
	return 0;
}
