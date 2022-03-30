#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
int is_stack_empty()
{
	return (needle < 0 ? 1 : 0);
}
int is_single_child_parent(struct node* temp)
{
	if(temp->left!=NULL && temp->right!=NULL)
		return 0;
	if(temp->left==NULL && temp->right!=NULL)
		return 0;
	return 1;
}
int no_of_children(struct node* temp)
{	
	if(temp->right==NULL && temp->left==NULL)
		return 0;
	if(temp->left==NULL && temp->right!=NULL)
		return 1;
	if(temp->left!=NULL && temp->right==NULL)
		return 1;
	if(temp->right!=NULL && temp->left!=NULL)
		return 2;
}


int is_leaf_node(struct node* temp)
{
	if(temp->right==NULL && temp->left==NULL)
		return 1;
	return 0;
}
void dump_stack(void)
{
	printf("\n stack : \n");
	int i=0;
	struct node *p = NULL;
	while(1)
	{
		p = pop();
		if (p == NULL)
			break;
		printf("%d :%p, %d\n", i++, p, p->v);
	}
}
