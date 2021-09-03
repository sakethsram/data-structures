#include "stdio.h"
#include "stdlib.h"
#include "defs.h"
struct student 
{
	int no;
	struct student *next;
};	
struct student *h;
int add_beg(int v)
{
	struct student *p;
	p=(struct student*)malloc(sizeof(struct student));
	p->no=v;
	p->next=h;
	h=p;
}
int del_node_by_pos(int x)
{
	struct student *t;
	int i=0;
	for(t=h,i=0;i!=x;t=t->next,i++);
	t->next=t->next->next;
	return 0;
}
int del_node_by_val(int v)
{
	struct student *t=h;
	for(t=h; t->next->no!= v ; t=t->next);
	t->next=t->next->next;
	return 0;
}
int valbypos(int x)
{
	int i=0;
	struct student *t=h;
	while(i!=x)
	{
		t=t->next;
		i++;
	}
	return (t->no);
}	
int posbyval(int v)
{
	int i=0;
	struct student *t=h;
	while(t->no !=v)
	{
		t=t->next;
		i++;
	}
	return i;
}
int get_count ()
{
	struct student *t;
	int i=0;
	t=h;
	while(t!=NULL)
	{
		t=t->next;
		i++;
	}
	printf("\n%d\n",i);
}
int add_node(int v)
{
	struct student *p=NULL,*t=NULL;
	p=(struct student*)malloc(sizeof(struct student));
	t=h;
	p->no=v;
	p->next=NULL;
	if(h==NULL)
	{
		h=p;
		return 0;
	}
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=p;
	return 0;
}
int dumplist()
{
	struct student *t;
	int i=0;
	t=h;
	while(t!=NULL)
	{
		t=t->next;
		i++;
	}
	printf("\n%d\n",i);
}	


int get_mid_val(int p)
{
	struct student *t=h;
	int y,i=0;
	while (t-> next != NULL)
	{
		t=t->next;
		i++;
	}
	y=i/2;
	printf("\n  val =%d \n",valbypos(y));
}
int add_node_circular(int v)
{
	struct student *p=NULL,*t=NULL;
	p=(struct student *)malloc(sizeof(struct student));
	t=h;
	p->no=v
	p->next=h;
	if(h==NULL)
	{
		h=p;
		p->next=h;
		return 0;
	}
	while(t->next!=h)
		t=t->next;
	t->next=p;
	return 0;
}	


