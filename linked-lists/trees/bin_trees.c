#include "stdio.h"
#include "stdlib.h"
#define MAX_STACK_SIZE 10

int needle = -1;
int stack[MAX_STACK_SIZE];

struct node 
{
	struct node *prev;
	int v;
	struct node *next;
};

struct node *Head=NULL;

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
	needle++;
	stack[needle] = v;
}
int add_node(int val)
{
	struct node *t = Head;
	struct node *p = NULL;

	p = malloc(sizeof(struct node));
	p->v = val;
	p->next = NULL;
	p->prev = NULL;

	if(Head == NULL)
	{
		Head = p;
		return 0;
	}

	while(t != NULL)
	{
		if(val > t->v)
		{
			if(t->next == NULL)
			{
				t->next = p;
				return 0;
			}

			t=t->next;
		}


		if(val < t->v)
		{
			if(t->prev == NULL)
			{
				t->prev = p;
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
	printf("\n right side values : \n ");
	printf("\n");
	for(i = 0, t = Head; i <=needle, t != NULL; t = t->next,i++)
	{
		printf(" %d:%d \n",i+1,t->v);
		push(t);
		
	}
	printf("\n");
}
void display_stack(void)
{
	printf("\n stack : \n");
	int i=needle;
	for(i = needle ; i >= 0  ; i-- )
	{
		printf("\n %d : %d \n ",	i, stack[i] ) ;
		pop();
	}
}	
int values[] = {8, 12, 10, 7, 32, 16, 14, 11, 64};
int main()
{
	int i = 0;
	for (i = 0; i <= sizeof(values)/sizeof(int); i++)
		add_node(values[i]);
	display_right();
	display_stack();
}
