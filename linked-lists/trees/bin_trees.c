#include "stdio.h"
#include "stdlib.h"

struct node 
{
	struct node *prev;
	int v;
	struct node *next;
};	

struct node *Head = NULL;

int add_node(int val)
{
	struct node *t = Head;
	struct node *p = NULL;

	p=malloc(sizeof(struct node));
	p->v=val;
	p->next = NULL;
	p->prev = NULL;

	if(Head==NULL)
	{
		Head=p;
		return 0;
	}

	while(t != NULL)
	{
		if(val > t->v)
		{
			if(t->next==NULL)
			{
				t->next = p;
				return 0;
			}

			t=t->next;
		}

		if(val < t->v)
		{
			if(t->prev==NULL)
			{
				t->prev=p;
				return 0;
			}

			t = t->prev;
		}	
	}
}

int values[] = {8, 12, 10, 7, 32, 16, 14, 11};
int main()
{
	int i = 0;

	for (i = 0; i <= sizeof(values)/sizeof(int); i++)
	{
		add_node(values[i]);
	}
}
