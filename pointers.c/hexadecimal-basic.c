#include "stdio.h"
int temp(int a )
{
	int f=1, b=2 ,c=3 , d= 4, e=5;
	printf("f :%p\n", &f);
	printf("b :%p\n", &b);
	printf("c :%p\n", &c);
	printf("d :%p\n", &d);
	printf("e :%p\n", &e);
	return 0;
}
int main()
{
	int a=1, b=2 ,c=3 , d= 4, e=5;
    temp(a);
	printf("\n\n");
	printf("a :%p\n", &a );
	printf("b :%p\n", &b );
	printf("c :%p\n", &c );
	printf("d :%p\n", &d );
	printf("e :%p\n", &e );
}

