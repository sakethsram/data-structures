#include "stdio.h"
 int main()
{
	int a=300,i;
	int *p=&a;
	char *pch = (char *) &a;
	short *sp = (short *) &a;

	printf("%d\n", *p);
	printf("%u\n", *pch);
	printf("%u\n", *sp); 
}	

