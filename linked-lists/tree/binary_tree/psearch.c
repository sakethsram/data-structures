#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
int search_node_by_value(int val)
{
	struct node *c=NULL;
	struct node *parent=NULL;
	c = root;
	int i;
	while(TRUE)	
	{
		if (c == NULL)
			break;

		if(val == c->v)
			break;

		parent=c;

		if(val > c->v)
			c=c->right;
		else if(val < c->v)
			c=c->left;
	}	
	if (c == NULL)
	{
		printf("Value %d, not found\n", val);
		return -1;
	}
	if (c)
		printf("Searching value %d Found :%d at %p\n", val, c->v, c);

	if (parent)
		printf("            parent value :%d at %p\n", parent->v, parent);
	return 0;
}

