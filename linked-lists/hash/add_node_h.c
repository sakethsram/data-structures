#include "stdio.h"
#include "defs.h"
#include "stddef.h"
#include "stdlib.h"
extern struct student *h[4];
int add_node_h(int v)
{
	struct student *t=NULL,*p=NULL;
	int hash;
	p=(struct student *)malloc(sizeof( struct student ));
	p->no=v;
	p->next!=NULL;
	hash=get_hashkey(v);
	t=h[hash];
	if(h[hash]==NULL)
	{
		h[hash]=p;
		return 0;
	}
	for(t=h[hash];t->next!=NULL;t=t->next);
	t->next=p;
	return 0;
}
