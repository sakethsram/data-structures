#include "stdio.h"
#include "stdlib.h"
struct node 
{
	struct node *pre;
	int v;
	struct node *next;
};	
int add_node(int val)
{
	struct node *t=NULL;
	struct node *p=NULL;
	struct node *h=NULL;
	p=malloc(sizeof(struct node));
	p->v=val;
	if(h==NULL)
	{
		h=p;
		p->pre=NULL;
		p->next=NULL;
		return 0;
	}
	while(t!=NULL)
	{
		if((t->v)<val)
		{
			if(t->next==NULL)
			{
				t->next=p;
				return 0;
			}
			if(t->next!=NULL)
				t=t->next;
		}
		if((t->v)>val)	
		{
			if(t->pre==NULL)
			{

				t->pre=p;
				return 0;
			}
			t=t->pre;
		}	
	}

}
int main()
{
}
