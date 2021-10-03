#include"stdio.h"
#include"stdlib.h"

#define MAX_QUEUE_SIZE 10

int max=10;
int min=0;
int needle=MAX_QUEUE_SIZE;
int temp = MAX_QUEUE_SIZE;
int queue[MAX_QUEUE_SIZE];

int push (int  v)
{
	if(needle >= min && needle < max+1)
	{
		queue[needle]=v;
		needle--;
	}
}

int pop(void)
{
	int t=queue[needle];
	temp--;
	return t;
}	

void dump_queue(void)
{
	int i=0;
	printf("queue len :%d-->", temp );
	for(i = 0; i <= needle || i <= temp; i++)
	{
		printf("%5d", queue[i]);
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
	dump_queue();
	pop();
	dump_queue();
}

