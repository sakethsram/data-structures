#include "stdio.h"
int main()
{
	int a[5]={0,1,2,3,4} , *p ;
	p=a;
	int i=0,n=5,j;
	printf("\n \n ");
	for( i=0 ; i<=n-1;i++)
	{
		j=(*(p+i));
		printf(" %d, " ,j);
	}
}	

