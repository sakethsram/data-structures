#include "stdio.h"
int main()
{
	int a = 300, i, *p;
	char *pch;

	p = &a;
	pch = (char *)p;

	for(i = 1; i <= 4; i++, pch++)
		printf(" %d \n " , *pch);
}

