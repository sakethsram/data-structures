#include "stdio.h"
int show_bits(int n);
int get_bit_count(int n);

int main()
{
	int  n = 10;
	int bcount = 0;

	show_bits(n);
	bcount = get_bit_count(n);

	printf("Total bit count in %d are :%d\n", n, bcount);
}	
