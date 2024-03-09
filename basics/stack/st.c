#include"stdio.h"
#include"stdlib.h"
#define MAX 5
int sn = 0;
int top = 0;
int b = 0;
int stack[MAX];
int q[MAX];
int queue_pop(void)
{
	int t;
	t = q[b];
	b++;
	return t;
}	

int push_queue(int v)
{
	if (top > MAX)
	{
		printf("queue overflow\n");
		return 0;
	}
	q[top] = v;
	top++;
}
int stack_pop(void)
{
	int t;
	t = stack[sn];
	sn--;
	return t;
}

int push_stack(int v)
{
	if (sn > MAX)
	{
		printf("Stack overflow\n");
		return 0;
	}
	stack[sn] = v;
	sn++;
}

void print_stack(void)
{
	int i=0;
	for(i = 0; i < sn; i++ )
	{
		printf("%5d", stack[i]);
	}	
	printf("\n");
}
void print_queue(void)
{
	int i=b;
	for(i = b; i < top; i++ )
	{
		printf("%5d", q[i]);

	}	
	printf("\n");
}


int main()
{
	push_queue(4);
	push_queue(2);
	push_queue(5);
	print_queue();
	queue_pop();
	print_queue();
}

