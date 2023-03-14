#include "stdio.h"
int f(int n)
{
	if(n==0)
		return 0;
	else
		return (n%10)+f(n/10);
}	
int main()
{
	printf("\n%d\n",f(03));
	return 0;
}

