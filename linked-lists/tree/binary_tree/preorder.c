#include "stdio.h"
#include "stdlib.h"
#include "defs.h"
void preorder_traversal(void)
{
	int i = 0;
	struct node *c=NULL, *popped;
	c = root;
	push(root);
	while(is_stack_empty() == FALSE)
	{
		popped=pop();
		printf("\n value :%d\n", popped->v);	
		if(popped->right!=NULL)
			push(popped->right);
		if(popped->left!=NULL)
			push(popped->left);
	}
}
