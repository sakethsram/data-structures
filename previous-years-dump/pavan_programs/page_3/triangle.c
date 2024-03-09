#include"stdio.h"
int triangle( int a,int b , int c)
{
	if(a+b<c || b+c<a || a+c<b )
	{
		printf("not possible\n");
		return 0;
	}
	printf("possible\n");
	return 1;
}
int main()
{
	int temp= triangle( 2,3,4);
}
