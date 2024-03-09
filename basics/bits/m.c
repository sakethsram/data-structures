#include "stdio.h"
#include "defs.h"
#include "stdlib.h"

/*
int test_is_power_of_two(int n)
{
	int b = 0;
	int bcount = 0;

	show_bits(n);

	bcount = get_bit_count(n);
	printf("Total bit count in %d are :%d\n", n, bcount);

	b = is_power_of_two(n);
	if(b == 1)
		printf("%d: is power of two\n", n);
	else
		printf("%d: is NOT a power of two\n", n);
}


int test_a_and_b()
{
	int a = 6, b = 5, spos = 0, epos = 2, res = 0;

	show_bits_range(a, spos, epos);
	show_bits_range(b, spos, epos);
	res = a & b;
	printf("After %d & %d\n", a, b);
	show_bits_range(res, spos, epos);

	x_and_y(a, b);
}*/

int main()
{
	int n=11,byte_pos=1;
	int res=get_byte(n,byte_pos);
	printf("\n the value of result is :%d \n",res);
}

