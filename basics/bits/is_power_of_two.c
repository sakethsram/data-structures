#include "stdio.h"

int get_bit_count(int n);

int is_power_of_two(int n)
{
	int t;
	t = get_bit_count(n);
	if(t==1)
		return 1;
	return 0;
}		


