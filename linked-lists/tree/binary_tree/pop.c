#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
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
