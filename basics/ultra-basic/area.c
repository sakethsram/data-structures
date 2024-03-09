#include "stdio.h"
int area( int b , int l )
{
	int a= l*b;
 	printf(" \n area is  : %d \n ",a);
	return a;
}	
int main()
{
	int l=15,b=55;
	int a=area( l , b);
}
	
