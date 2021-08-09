#include "stdio.h"
#include "defs.h"

int main()
{
	int  n = 10;
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
