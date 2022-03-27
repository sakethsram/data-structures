#include "defs.h"
#include "stdio.h"
#include "stdlib.h"
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
