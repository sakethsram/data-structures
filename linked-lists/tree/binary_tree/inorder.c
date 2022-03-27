#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
void inorder_traversal(void)
{
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
			printf("%d. v: %5d, Add:%p\n", __LINE__,  popped->v, popped);	
		}
		if(c != NULL)
			c=c->left;
		if(c == NULL && is_stack_empty() == TRUE)
			break;
	}
}
