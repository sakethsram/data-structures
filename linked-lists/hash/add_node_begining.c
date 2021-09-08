#include "stdio.h"
#include "defs.h"
#include "stddef.h"
#include "stdlib.h"
extern struct student *h[4];
int add_node_begining(int v)
{
	int temp=0;
	struct student *p;
	temp=get_hashkey(v);
	if(h[temp]==NULL)
	{
		add_node_h(v);
		return 0;
	}
	p=malloc(sizeof(struct student ));
	p->no=v;
	p->next=h[temp];
	h[temp]=p;
	return 0;
}	

