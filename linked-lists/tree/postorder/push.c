#include "stdio.h"
#include "stdlib.h"
#define TRUE 1
#define FALSE 0
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

