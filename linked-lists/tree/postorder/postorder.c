#include "stdio.h"
#include "stdlib.h"
#define TRUE 1
#define FALSE 0
#define MAX_STACK_SIZE 10

int push2(struct node *p);
int push1(struct node *p);
int add_node(int val);
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
int dump_stack2(void)
{
	printf("\n  needle2    = %d \n ",needle2);
	int i=0;
	printf(" i= %d \n",i);
	//for(i=0;i>=needle2;i++)
	//	printf(" value = %p \n",stack2[i]);
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
void postorder_traversal(void)
{
	struct node *c=NULL, *popped;
	c = root;
	push1(root);
	while(is_stack1_empty==FALSE)
	{
		popped=pop();
		push2(popped);
		if(popped->right!=NULL)
			push1(popped->right);
		if(popped->left!=NULL)
			push1(popped->left);
	}
	dump_stack2();
}
int values[] = {8, 12, 10, 7, 32};
int main()
{
	struct node *c=root;
	int i = 0;
	for (i = 0; i < sizeof(values)/sizeof(int); i++)
		add_node(values[i]);
	postorder_traversal();
}
