#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
int bt_delete_leaf_node(struct node* c,struct node*parent)
{
	if(c->right==NULL )
	{
		printf(" %d \n",__LINE__);
		if( c->left==NULL)
		{
			printf(" %d \n",__LINE__);
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
		free(c->left);
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
	
	/*struct node *c=root;
	struct node *parent=NULL;
	bt_delete_leaf_node(c,parent);
	return 0;

	//Delete single parent to left node 
		bt_delete_single_parent_left(c, parent);

	//Delete single parent to right node 
	bt_delete_single_parent_right(c,parent);*/
}
