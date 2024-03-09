#include "stdio.h"
#include "defs.h"
int oddbits(int n)
{
	printf("n =");
	printf(" \n");
	show_bits(n);
	printf(" \n");

	int m=0xAAAAAAAA;
	printf("m=");
	printf("\n");
	show_bits(m);
	printf("\n");

	int a=m|n;
	printf(" n|m = ");
	printf("\n");
	show_bits(a);
	printf("\n");
	
	if(a==m)
		return 1;
	else
		return 0;

}	
	

