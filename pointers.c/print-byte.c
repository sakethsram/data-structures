#include "stdio.h"
int main()
{
	int   a=300,i,*p;
	p=&a;
	char *pch;
	pch=p;
	for(i=1;i<=4;i++,pch++)
		printf(" %u \n " , *pch);
}

