#include "stdio.h"
#include "stdlib.h"
#include "defs.h"
extern  struct student *h;
int del_node_by_val(int v)
{
	struct student *t=h;
	for(t = h;t->no !=v ;t = t->next);
	t->next=t->next->next;
	return 0;
}
