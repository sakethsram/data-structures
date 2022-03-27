#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
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
