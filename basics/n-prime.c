#include "stdio.h"
int prime( int a)
{
	int i;
   	for(i=2;i<a;i++)
	{	
		if(a%i==0)
			return 0;
	}
	return a;
}	
int main()
{
	int a,temp=0,z=0,k=5,n=10;
	for (a=2; z!=n	;a++)
	{
		temp=prime( a );
		{
			if(a==temp)
			{
				printf(" \n %5d \n ", a);
				z++;
			}
		}	
	}
}
		 
			




