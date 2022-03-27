#include "stdio.h"
#include "stdlib.h"
#include "defs.h"
int values[] = {20,10,31,5,15,25,42,2,12,19,11,14,35,47,33,37};
struct node *stack[MAX_STACK_SIZE];
struct node *root=NULL;
int needle = -1;
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
	temp = get_node_by_val(10);
	return 0;
}

