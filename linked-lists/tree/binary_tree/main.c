#include "stdio.h"
#include "stdlib.h"
#include "defs.h"
int values[] = {20,10, 31, 5, 15, 32};
int svals[] = { 20,10, 31, 5, 15, 32};
struct node *stack[MAX_STACK_SIZE];
struct node *root=NULL;
int needle = -1;
int validate_search(void)
{
	int i=0;
	for (i = 0; i < sizeof(svals)/sizeof(int); i++)
	{
		printf("Searching :%d...\n", svals[i]);
		search_node_by_value(svals[i]);
		printf("\n");
	}
}

int build_btree(void)
{
	int i=0;
	for (i = 0; i < sizeof(values)/sizeof(int); i++)
		add_node(values[i]);
}

void dump_btree(void)
{
	inorder_traversal();
}

int main()
{
	struct node *c=root;
	struct node* temp=NULL;

	build_btree();
	dump_btree();
	//validate_search();
	delete_node_by_value(10);
	dump_btree();
	return 0;
}

