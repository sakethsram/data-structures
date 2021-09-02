#include "stdio.h"
#include "stdlib.h"
struct student 
{
	int no;
	struct student *next;
	struct student *p;
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
	printf("\n number of nodes = %d \n",i);
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
	while (t->no!=v)
	{
		t=t->next;
		i++;
	}
	return i;
}	
		
int add_node_double(int v)
{
	struct student *p=NULL,*t=NULL;
	p=(struct student*)malloc(sizeof(struct student));
	t=h;
	p->no=v;
	p->next=NULL;
	if(h==NULL)
	{
		h=p;
		p->p=NULL;
		return 0;
	}
	while(t->next!=NULL)
	{
		t=t->next;
	}	
	t->next=p;
	p->p=t;
	return 0;
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
	printf("\n  mid  value = %d  \n",valbypos(y));
}
int dumplist()
{
	struct student *t=h;
	while(t!=NULL)
	{
		printf("\n node value =%d \n",t->no);
		t=t->next;
	}
}	
int main()
{
	int y,l;
	add_node_double(10);
	add_node_double(20);
	add_node_double(30);
	add_node_double(50);
	add_beg(100);
	dumplist();
	get_count();
	y=valbypos(3);
	l= posbyval( 30);
	printf("\n value by given position = %d\n",y);
	printf("\nposition  by given value = %d\n",l);
}


	




