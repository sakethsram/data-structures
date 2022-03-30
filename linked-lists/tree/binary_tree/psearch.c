#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
struct node *parent=NULL;
struct node *c=NULL;
struct node* p_search(int val)
{
	parent = NULL;
	c=root;
	int i;

	while(TRUE)	
	{
		parent=c;
		if(val > c->v)
			c=c->right;
		if(val < c->v)
			c=c->left;
		if(val == c->v)
			break;
	}	
	if (c == NULL)
	{
		printf("Value %d, not found\n", val);
		return NULL;
	}
	printf("Searching value %d Found :%d at %p\n", val, c->v, c);
	printf("            parent value :%d at %p\n", parent->v, parent);
	i=no_of_children(c);
	if(i==0)
	{
			if(c->right==NULL && c->left==NULL)
			{
				if(parent->right!=NULL)
					parent->right=NULL;
				if(parent->left!=NULL)
					parent->left=NULL;
				free(c);
				return 0;
			}
	}	
	if(i==1)
	{
		if(c->left!=NULL && c->right==NULL)
		{
			c->v = c->left->v;
			free(c->left);
			c->left = c->left->left; 
		}	
		if(c->left==NULL && c->right!=NULL)
		{
			c->v = c->right->v;
			free(c->right);
			c->right = c->right->right; 
		}
	}	
}
	
