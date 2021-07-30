#include "stdio.h"
int main()
{
	int  i=1 , j=0 , temp=1 , n=5 ;
	for(i=1;i<=n;i++)
	{
		for(j=1,temp=1;j<=i;j++)
			temp=temp*j;
		printf( "%d!: = %d\n", i, temp);
	}
}	
		
