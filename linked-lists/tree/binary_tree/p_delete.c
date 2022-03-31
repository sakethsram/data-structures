#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
int bt_delete_leaf_node(struct node* c,struct node*parent)
{
	if(c->right==NULL )
	{
		if( c->left==NULL)
		{
			if(parent->right==c)
			{
				parent->right=NULL;
				free(c);
			}	
			if(parent->left==c)
			{
				parent->left=NULL;
				free(c);
			}	
		}
	}
	return 0;
}	

int bt_delete_single_parent_left(struct node*c, struct node*parent)
{

	if(c->left != NULL && c->right==NULL)
	{
		printf("\n %d \n",__LINE__);
		struct node*t=NULL;
		c->v=c->left->v;
		t=c->left;
		c->left=c->left->left;
		free(t);
		return 0;
	}
} 
int bt_delete_single_parent_right(struct node*c, struct node*parent)
{
	if(c->right != NULL)
	{
		if(c->left==NULL)
		{
			struct node*t=NULL;
			c->v=c->right->v;
			t=c->right;
			c->right=c->right->right;
			free(t);
		}
	}	
	return 0;
}

int delete_node_by_value(int val)
{
	struct node *c=NULL, *nc = NULL;
	struct node *parent=NULL, *nparent = NULL;
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

	//leaf node
	if(c->right==NULL && c->left==NULL )
	{
		bt_delete_leaf_node(c,parent);
		return 0;
	}


	//parent to single child on left
	if(c->left != NULL && c->right==NULL)
	{
		bt_delete_single_parent_left(c,parent);
		return 0;
	}

	//parent to single child on right
	if(c->left == NULL && c->right!=NULL)
	{
		bt_delete_single_parent_right(c,parent);
		return 0;
	}

	//nparent to multiple childs
	//From current node, 
	//	get pointer to right min node and its nparent
	if(c->left!=NULL && c->right!=NULL)
	{
		nparent=c;
		nc = c->right;
		for(;nc->left!=NULL;nparent=nc,nc=nc->left);
		printf("NC value Found :%d at %p\n", nc->v, nc);
		printf("            nparent value :%d at %p\n", nparent->v, nparent);
	}
	c->v=nc->v;
	
	//leaf node
	if(nc->right==NULL && nc->left==NULL )
	{
		bt_delete_leaf_node(nc,nparent);
		return 0;
	}

	//nparent to single child on left
	if(nc->left != NULL && nc->right==NULL)
	{
		bt_delete_single_parent_left(nc,nparent);
		return 0;
	}

	//parent to single child on right
	if(nc->left == NULL && nc->right!=NULL)
	{
		bt_delete_single_parent_right(nc,nparent);
		return 0;
	}
}

