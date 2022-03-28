#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
struct node* delete_node_by_val(int val)
{
	printf("\n");
	printf("\n");
	struct node *c=NULL, *popped, *parent = NULL;
	c = root;
	while(TRUE)
	{
		if(c != NULL)
			push(c);
		if(c==NULL && is_stack_empty()==FALSE)
		{
			popped = pop();
			c = popped->right;
			if(c != NULL)
				push(c);
			if(popped->v==val)
			{
				printf("%d.%s searched  Value  :%d,  Addr :%p\n", __LINE__,  __FILE__, popped->v, popped);
				parent = popped;
				printf("%d.%s PV :%d, PAddr :%p\n", __LINE__,  __FILE__, parent->v, parent);
				return popped;
			}	
		}
		if(c != NULL)
			c=c->left;
		if(c == NULL && is_stack_empty() == TRUE)
			break;
	}
	return NULL;
}
