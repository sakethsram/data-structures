#include"stdio.h"
#include"stdlib.h"
int needle=10;
int stack[10];
void pop(void)
{
	needle--;
}
void dump_array(void);
{
	int i=0;
	for(i = 0 ; i<=9 ; i++)
	{
		printf(" %5d ", i);
		printf(" %5d ", stack[i] );
	}	
}
