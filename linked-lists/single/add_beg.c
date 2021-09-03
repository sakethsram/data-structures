#include "stdio.h"
#include "stdlib.h"
extern struct student 
int add_beg(int v)
{
	struct student *p;
	p=(struct student*)malloc(sizeof(struct student));
	p->no=v;
	p->next=h;
	h=p;
}	
