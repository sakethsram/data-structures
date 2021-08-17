#include "stdio.h"
int temp(int a )
{
	printf("a :%u", &a);
	return 0;
}
int main()
{
	 int a=1, b=2 ,c=3 , d= 4, e=5;
	printf("b :%u\n", &b );
	printf("c :%u\n", &c );
	printf("d :%u\n", &d );
	printf("e :%u\n", &e );
    temp(a);
}

