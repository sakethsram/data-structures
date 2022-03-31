#include "stdio.h"
#include "stdlib.h"
#include "defs.h"
//int values[] = {20,10,31,5,15,25,42,4,43};
int values[] = {20, 10, 31, 5, 15, 32};
int svals[] = {20, 5, 10, 15, 99};
struct node *stack[MAX_STACK_SIZE];
struct node *root=NULL;
int needle = -1;
int main()
{
	struct node *c=root;
	struct node* temp=NULL;
	int i=0;
	for (i = 0; i < sizeof(values)/sizeof(int); i++)
		add_node(values[i]);
	inorder_traversal();
	for (i = 0; i < sizeof(svals)/sizeof(int); i++)
	{
		printf("Searching :%d...\n", svals[i]);
		temp = p_delete(svals[i]);
		printf("\n");
	}
	inorder_traversal();
}

