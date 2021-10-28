#include "stdio.h"
#include "stdlib.h"
#define MAX_STACK_SIZE 10
int needle = 0;
int stack[MAX_STACK_SIZE];


struct node 
{
	struct node *prev;
	int v;
	struct node *next;
};
int pop(void)
{
	int t;
	t = stack[needle];
	needle--;
	return t;
}
int push(int v)
{
	if (needle > MAX_STACK_SIZE)
	{
		printf("Stack overflow\n");
		return 0;
	}
	stack[needle] = v;
	needle++;
}
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

void display_right(void)
{
	struct node *t=NULL;
	struct node *p=NULL;
	int i=0;

	printf("\n");
	for(i = 0, t = Head; i <=MAX_STACK_SIZE, t != NULL; t = t->next,i++)
		stack[i] = t->v ;
	printf("\n");
}


int values[] = {8, 12, 10, 7, 32, 16, 14, 11};
int main()
{
	int i = 0;

	for (i = 0; i <= sizeof(values)/sizeof(int); i++)
	{
		add_node(values[i]);
	}
	display_right();
}
