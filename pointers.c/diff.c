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
		int   a=1; 
		char  b=2;
		int   c=3; 
		short  d=4; 
		//char  e=5;
		 int   f=6;
	//temp(a);
	printf("\n\n");
	printf("a :%u\n", &a );
	printf("b :%u\n", &b );
	printf("c :%u\n", &c );
	printf("d :%u\n", &d );
	//printf("e :%u\n", &e );
	printf("f :%u\n", &f );
}

