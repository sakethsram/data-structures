#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
struct student *h;
int add_node(int v)
{
	struct student *p=NULL,*t=NULL;
	t=h;
	p=malloc(sizeof(struct student));
	p->no=v;
	p->next=NULL;
	if(h==NULL)
	{
		h=p;
		return 0;
	}
	while(t->next!=NULL)
		t=t->next;
	t->next=p;
	return 0;
}

