#include "stdio.h"
#include "stdlib.h"
#include "defs.h" 
extern  struct student *h[29];
int del_node_by_val(char v)
{
	int hkey;
	hkey=alindex(v);
	struct student *t=h[hkey];
	struct student *p=h[hkey];
	if(h[hkey]->name==v)
	{
		h[hkey]=t->next;
		free(t);
		return 0;
	}
	for(t=h[hkey] ; t->next!=NULL ; t=t->next )
	{
		if( t->name == v )
		{
			p->next = t->next ;
			free(t);
			return 0;
		}
		p=t;		
	}
	return 0;
}
