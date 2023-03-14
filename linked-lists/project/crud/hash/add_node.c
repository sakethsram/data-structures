#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
extern struct student *h[28];
int add_node(int rno, char *name, int marks)
{
	int hkey=alindex(name);
	struct student *p=NULL,*t=NULL;
	t=h[hkey];
	p=malloc(sizeof(struct student));
	p->rno=rno;
	strcpy(p->name, name);
	p->marks=marks;
	p->next=NULL;
	p->prev=NULL;
	if(h[hkey]==NULL)
	{
		h[hkey]=p;
		return 0;
	}
	while(t->next != NULL)
		t=t->next;
	t->next=p;
	t->prev=t;
	return 0;
}
