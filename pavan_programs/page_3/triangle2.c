#include"stdio.h"
int triangle( int a,int b , int c)
{
	if(a=b=c)
	{
		printf(" \n a = %d b= %d c= %d  ",a ,b,c);
		printf("\n 1\n");
		printf("equilateral triangle\n");
		return 1;
	}	
	if(a=b)
	{
		printf("\n 2\n");
		printf("isoacleles triangle\n");
		return 1;
	}
	if(b=c)
	{
		printf("\n 3");
		printf("isoacleles triangle\n");
		return 1;
	}
	if(a=c)
	{
		printf("\n 4");
		printf("isoacleles triangle\n");
		return 1;
	}
	printf("sacalane triangle\n");
	return 1;
}
int main()
{
	int temp= triangle( 2,3,4);
}
