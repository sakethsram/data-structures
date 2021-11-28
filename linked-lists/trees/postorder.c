#include "stdio.h"
#include "stdlib.h"
#define TRUE 1
#define FALSE 0
#define MAX_STACK_SIZE 10

int needle1 = -1;
int needle2 = -1;
struct node *stack1[MAX_STACK_SIZE];
struct node *stack2[MAX_STACK_SIZE];

struct node 
{
	struct node *left;
	int v;
	struct node *right;
};

struct node *root=NULL;
int push2(struct node *p)
{
	if (needle2 > MAX_STACK_SIZE)
	{
		printf("Stack overflow\n");
		return 0;
	}
	needle2++;
	stack2[needle2] = p;
}
int push1(struct node *p)
{
	if (needle1> MAX_STACK_SIZE)
	{
		printf("Stack overflow\n");
		return 0;
	}
	needle1++;
	stack1[needle1] = p;
}
struct node* pop(void)
{
	struct node *node;
	if(needle1< 0)
	{
		printf("  \n stack1 is empty \n");
		return NULL;
	}	

	node = stack1[needle1];
	needle1--;
	push2(node);	
	return node;
}
int is_stack1_empty()
{
	return (needle1 < 0 ? 1 : 0);
}
int add_node(int val)
{
	struct node *t = root;
	struct node *p = NULL;

	p = malloc(sizeof(struct node));
	p->v = val;
	p->right = NULL;
	p->left = NULL;

	if(root == NULL)
	{
		root = p;
		return 0;
	}

	while(t != NULL)
	{
		if(val > t->v)
		{
			if(t->right == NULL)
			{
				t->right = p;
				return 0;
			}

			t=t->right;
		}


		if(val < t->v)
		{
			if(t->left == NULL)
			{
				t->left = p;
				return 0;
			}

			t = t->left;
		}	
	}
}

void postorder_traversal(void)
{
	struct node *c=NULL, *popped;
	c = root;
	push1(root);
	while(is_stack1_empty==FALSE)
	{
		popped=pop();
		if(popped->right!=NULL)
			push1(popped->right);
		if(popped->left!=NULL)
			push1(popped->left);
	}
}
int values[] = {8, 12, 10, 7, 32};
int main()
{
	struct node *c=root;
	int i = 0;
	for (i = 0; i < sizeof(values)/sizeof(int); i++)
	{
		add_node(values[i]);
		printf("value :%d\n", values[i]);
	}
	printf("is stack empty :%s\n", is_stack1_empty() ? "TRUE" : "FALSE");
	postorder_traversal();
}
