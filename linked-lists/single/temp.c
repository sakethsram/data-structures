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
int posbyval(int v)
{
	int i=0;
	struct student *t=h;
	while(t->no !=v)
	{
		t=t->next;
		i++;
	}
	printf(" \n i=%d \n",i);
	return i;
}
int main()
{
	add_node(10);
	add_node(80);
	add_node(90);
	posbyval(10);
}	

