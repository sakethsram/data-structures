#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
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
