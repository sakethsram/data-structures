#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
struct student *h[4];
int get_hashkey(int v)
{
	if(v>=0 && v<=25)
		return 0;
	if(v>=25 && v<=50)
		return 1;
	if(v>=50 && v<=75)
		return 2;
	if(v>=75 && v<=100)
		return 3;
	else 
		printf("\n wrong number\n");
	return -1;
}
int add_node_hash(int v)
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
int dumplist()
{
	struct student *t;
	int i = 0;
	for(i = 1; i <= 20; i++)
		printf("%5d", i);
	printf("\n");
	for(i=0;i<=4;i++)
	{
		for(t = h[i]; t != NULL; t = t->next)	
			printf("%5d", t->no);
	}
		printf("\n");
}	
int main()
{
	get_hashkey(10);
	add_node_hash(10);
	get_hashkey(30);
	add_node_hash(30);
	get_hashkey(40);
	add_node_hash(40);
	dumplist();
}	


