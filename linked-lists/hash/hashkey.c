#include "defs.h" #include "stddef.h"
#include "stdio.h"
#include "stdlib.h"
extern struct student *h[4];
int hashkey(int v)
{
	int hk=get_hashkey(v);
	if(hk==-1)
	{
		printf(" \ntoo less of a value \n");
		return 0;
	}	
	struct student *p=NULL,*th=NULL;
	th=h[hk];
	p=malloc(sizeof(struct student));
	p->no=v;
	p->next=NULL;
	if(h[hk]==NULL)
	{
		h[hk]=p;
		return 0;
	}	
	for(th=h[hk];th->next!=NULL;th=th->next);
	th->next=p;
	return 0;
}

