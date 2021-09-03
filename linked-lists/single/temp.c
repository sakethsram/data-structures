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
	for(i=1,t=h;t->no!=v;t=t->next,i++);
	printf(" \n position = %d \n",i);
	return i;
}
int valbypos(int pos)
{
	int i=0;
	struct student *t=h;
	for(i=1,t=h;i!=pos;t=t->next,i++);
	//printf("\n val= %d\n",t->no);
	return (t->no);
}	
int midval()
{
	struct student *t=h;
	int i=1;
	while (t-> next != NULL)
	{
		t=t->next;
		i++;
	}
	for( i=1,t=h ; t->next!=NULL; i++,t=t->next ) ;
	printf(" \n1. i = %d",i);
	int j=valbypos(i);
	printf("\n  midvalue = %d \n",j);
}
int reverse_list(int v)
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
	t->next=h;
	return 0;
}
int update_node_by_value(int ov,int nv)
{
	struct student  *t=h;
	t=h;
	while(1)
	{
			if(t->no==ov)
			{
				t->no=nv;
				return (t->no);
			}
			t=t->next;
	}
	printf("\n the given value of %d was not present ",ov);
}	
int update_all_node_by_value(int ov,int nv)
{
	struct student  *t=h;
	t=h;
	while(1)
	{
			if(t->no==ov)
				t->no=nv;
			t=t->next;
	}
	printf("\n the given value of %d was not present ",ov);
}	
int del_node_by_val(int v)
{
	struct student *t=h;
	if(t->no==v)
	{
		h = h -> next;
		t = h;
		return 0;
	}	
	for(t = h;t -> next ->no !=v ;t=t->next);
	t->next=t->next->next;
	return 0;
}
int dumplist()
{
	struct student *t;
	int i = 0;

	for(i = 1; i <= 20; i++)
		printf("%5d", i);

	printf("\n");

	for(t = h; t != NULL; t = t->next)	
		printf("%5d", t->no);

	printf("\n");
	printf("\n");
}
int main()
{
	add_node(10);
	add_node(80);
	add_node(90);
	dumplist();
	del_node_by_val(10);
	dumplist();

}	

