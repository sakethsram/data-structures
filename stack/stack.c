
#include"stdio.h"
#include"stdlib.h"

#define MAX_STACK_SIZE 10
int needle = 0;
int stack[MAX_STACK_SIZE];

int pop(void)
{
	int t;
	t = stack[needle];
	needle--;
	return t;
}

int push(int v)
{
	if (needle > MAX_STACK_SIZE)
	{
		printf("Stack overflow\n");
		return 0;
	}
	stack[needle] = v;
	needle++;
}

void dump_stack(void)
{
	int i=0;
	printf("stack len :%d-->", needle);
	for(i = 0; i < needle; i++ )
	{
		printf("%5d", stack[i]);
	}	
	printf("\n");
}

int main()
{
	push(5);
	push(9);
	push(2);
	push(1);
	push(1);
	push(3);
	push(4);
	push(6);
	push(7);
	push(6);
	push(9);
	dump_stack();
	pop();
	dump_stack();
}
