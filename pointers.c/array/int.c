#include "stdio.h"
int main()
{
	int a=10;
	int* p;
	int** pp;
	p=&a;
	pp=&p;

	printf(" pp= %p\n",pp);   
	printf("*pp= %p\n",*pp); 
	printf("*pp= %d\n",**pp); 
}	
