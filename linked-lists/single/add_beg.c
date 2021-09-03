#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

extern struct student *h;
int add_beg(int v)
{
	struct student *p;
	p=(struct student*)malloc(sizeof(struct student));
	p->no=v;
	p->next=h;
	h=p;
}	
