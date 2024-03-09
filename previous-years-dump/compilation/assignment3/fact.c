#include "defs.h"
int fact(int n)
{
	int i=1,temp=1;
	for(i=1;i<=n;i++)
		temp=temp*i;
	return temp;

}


