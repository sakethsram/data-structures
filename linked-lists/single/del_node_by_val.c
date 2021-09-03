#include "stdio.h"
#include "stdlib.h"
extern  struct student *h
int del_by_val(int v)
{
	struct student *t=h;
	int i=0;
	for(t = h,i = 0;t->next->no != v ; t = t->next, i++);
	t->next=t->next->next;
	return 0;
}
