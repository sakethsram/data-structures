#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
struct node* get_node_by_val(int val)
{
	printf("\n");
	printf("\n");
	struct node *c=NULL, *popped;
	c = root;
	while(TRUE)
	{
		if(c != NULL)
			push(c);
		if(c==NULL && is_stack_empty()==FALSE)
		{
			popped = pop();
			c = popped->right;
			if(c!=NULL)
				push(c);
			if(popped->v==val)
			{
				//	printf("%d. node address is: %p, node  value is :%d\n", __LINE__,  popped, popped->v);	
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
