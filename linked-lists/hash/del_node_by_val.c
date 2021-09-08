#include "stdio.h"
#include "defs.h"
#include "stddef.h"
#include "stdlib.h"
extern struct student *h[4];
int del_node_by_val(int v)
{
	struct student *t=h;
	struct student *pt=h;
	int temp;
	temp=get_hash_key;
	t=h[temp];
	if(h[temp]->no==v)
	{
		h[temp]=h[temp]->next;
		t=h[temp];
		free(t);
		return 0;
	}
	while(t->no!=v && t!=NULL)
	{
		pt=t;
		t=t->next;
	}
	if(t==NULL)
	{
		printf(" \n there is no node to be deleted \n");
		retrun 0;
	}	
	if(t->next==NULL)
	{
		pt->next=NULL;
		free(t);
		return 0;
	}	
	pt->next=t->next;
	return 0;
}	

		











}
