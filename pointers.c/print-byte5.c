#include "stdio.h"
 int main()
{
	int a = 300, i;
	int *p = &a;
	char *pch = (char *) &a;
	short *sp = (short *) &a;

	*pch = 0;

	printf("%d\n", *p);
	printf("%u\n", *pch);
	printf("%u\n", *sp); 
}	

