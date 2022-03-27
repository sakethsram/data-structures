#include "stdio.h"
#include "stdlib.h"
#define TRUE 1
#define FALSE 0
#define MAX_STACK_SIZE 10
int needle = -1;
struct node *stack[MAX_STACK_SIZE];
struct node 
{
	struct node *left;
	int v;
	struct node *right;
};
struct node *root=NULL;
struct node* pop(void)
{
	struct node *node;
	if(needle < 0)
	{
		printf("  \n stack is empty \n");
		return NULL;
	}	
	node = stack[needle];
	needle--;
	return node;
}
int push(struct node *p)
{
	if (needle > MAX_STACK_SIZE)
	{
		printf("Stack overflow\n");
		return 0;
	}
	needle++;
	stack[needle] = p;
}
int is_stack_empty()
{
	return (needle < 0 ? 1 : 0);
}	

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
struct node* get_min_left_node_by_root(struct node* temp)
{
	struct node* t=temp;
	printf("%d. %s: v: %d, Add:%p\n", __LINE__, __FUNCTION__, temp->v, temp);	
	for(t=temp; t->left != NULL; t = t->left)
	{
		printf("%d. %s: v: %d, Add:%p\n", __LINE__, __FUNCTION__, t->v, t);	
	}
	printf("min v:%d, addr:%p\n", t->v, t);	
	return t;
}
struct node* get_max_right_node_by_root(struct node* temp)
{
	struct node* t=temp;
	printf("%d. %s: v: %d, Add:%p\n", __LINE__, __FUNCTION__, temp->v, temp);	
	for(t=temp; t->right != NULL; t = t->right)
	{
		printf("%d. %s: v: %d, Add:%p\n", __LINE__, __FUNCTION__, t->v, t);	
	}
	printf("max v:%d, addr:%p\n", t->v, t);	
	return t;
}
int single_child_parent(struct node* temp)
{
	if(temp->left!=NULL && temp->right!=NULL)
		return 0;
	if(temp->left==NULL && temp->right!=NULL)
		return 0;
	return 1;
}
int is_leaf_node(struct node* temp)
{
	if(temp->right==NULL && temp->left==NULL)
		return 1;
	return 0;
}
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

int values[] = {20,10,31,5,15,25,42,2,12,19,11,14,35,47,33,37};
int main()
{
	struct node *c=root;
	struct node* temp=NULL;
	struct node* temp2=NULL;
	int flag;
	int flag2;
	int i = 0;
	for (i = 0; i < sizeof(values)/sizeof(int); i++)
		add_node(values[i]);
	inorder_traversal();
	temp = get_node_by_val(33);
	printf("%d. get_node_by_val: v: %d, Add:%p\n", __LINE__,  temp->v, temp);	
	temp2 = get_max_right_node_by_root(temp);
	printf(" \n int main == temp =%d\n",temp->v);
	flag=single_child_parent(temp);
	printf("\nflag = %d \n",flag);
	
	flag2=is_leaf_node(temp);
	printf("\n%d\n",flag2);
	return 0;
}

