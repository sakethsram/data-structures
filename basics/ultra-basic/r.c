#include "stdio.h"
int f(int n)
{
	if (n!=0)
		return n+f(n-1);
	return 0;
}
int d(int n)
{
	if (n!=0)
		return n%10+d(n/10);
	return 0;
}
int main()
{
	int i,j,n;
	printf("\nenter n \n");
	scanf("%d",&n);
	i=f(n);
	j=d(n);
	printf(" \n i= %d \n",i);
	printf(" \n j= %d \n",j);
}
