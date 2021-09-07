#include "stdio.h"
#include "defs.h"
#include "stddef.h"
#include "stdlib.h"
extern struct student *h[4];
int del_node_by_val(int v)
{
	struct student *t=h;
	int temp;
	temp=get_hash_key;
	t=h[temp];
	if(h[temp]->no==v)
	{
		h[temp]=h[k]->next;
		t=h[k];
		return 0;
	}
	for(t=h;t->next!=v||t->next!=NULL;t=t->next)
	if(t-no!=v)
		return 0;
	if(t->next==NULL)
	{
		t=NULL;
		return 0;
	}	
	t->next=t->next->next;
	return 0;
}	











}
