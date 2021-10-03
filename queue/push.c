#include"stdio.h"
#include"stdlib.h"
int max=10;
int min=0;
int needle=10;
int temp = 0
int stack[10];
int push (int  v)
{
	if(needle=>min && needle<max+1)
	{
		stack[needle]=v;
		needle--;
	}
}
void pop(void)
{
	temp--;
}	
void dump_array(void);
{
	int i=0;
	for(i = 0 ; i<=needle || i<=temp ; i++)
	{
		printf(" %5d ", i);
		printf(" %5d ", stack[i] );
	}	
}
