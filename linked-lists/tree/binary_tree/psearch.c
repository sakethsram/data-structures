#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
struct node *parent=NULL;
struct node *c=NULL;
struct node* p_search(int val)
{
	struct node* flag=NULL;
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
	int bt_delete_leaf_node(struct node*c,struct node *parent)
	{
			if(c->right==NULL && c->left==NULL)
			{
				if(parent->right!=NULL)
				{
					if(parent->right->v==c)
						parent->right=NULL;
				}
				if(parent->left!=NULL)
				{
					if(parent->left->v==c)
					parent->left=NULL;
				}	
				free(c);
				return 0;
			}
	}	
	int bt_delete_single_child_node(struct node*c,struct node *parent)
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
	flag=get_min_right_node_by_root(c);
	if(i==2)
	{
		flag=get_min_right_node_by_root(c);
		c->v=flag;
		flag2= is_leaf_node(c->right);
		if(flag2==1)
		{
		}
	}
	nc = c->right;
	nparent = NULL;
	while(TRUE)
	{
		nparent=c;
		if(val > c->v)
			nc=nc->right;
		if(val < nc->v)
			nc=nc->left;
		if(val == c->v)
			break;
	}
}

