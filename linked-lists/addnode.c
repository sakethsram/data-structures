
#include "stdio.h"
#include "stdlib.h"
struct student 
{
	int no;
	struct student *next;
};	
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

int dumplist()
{
	struct student *t;
	for(t = h; t != NULL; t = t->next)	
		printf("%5d", t->no);

	printf("\n");
}

int del_by_val(int v)
{
	struct student *t;
	int i=0;
	for(t = h,i = 0; t->no != v; t = t->next, i++);
	t->next=t->next->next;
	return 0;
}

int del_node_by_pos(int x)
{
	struct student *t;
	int i=0;
	for(t=h,i=0;i!=x;t=t->next,i++);
	t->next=t->next->next;
	return 0;
}
int add_beg(int v)
{
	struct student *p;
	p=(struct student*)malloc(sizeof(struct student));
	p->no=v;
	p->next=h;
	h=p;
}	
int main()
{
	add_node(10);
	add_node(20);
	add_node(30);
	add_node(40);
	dumplist();
	add_beg(5);
	dumplist();
	//del_by_val(40);
	del_node_by_pos(1);
	dumplist();
}

