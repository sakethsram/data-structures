#include "stdio.h"

int get_bit_val_by_pos(int n, int bp)
{
	int mask = 1, t, res;

	t = mask << bp;
	res = n & t; 
	
	if(res==0)
		return 0;
	return 1;
}

int show_bits( int n )
{
	int i=31, bp=0, bitval = 0;
	for(i = 31 ; i >= 0 ; i--)
		printf("%5d", i);
	printf("\n");
	for(i = 31 ; i >= 0 ; i--)
	{
		bp = i;
		bitval = get_bit_val_by_pos(n,  bp);
		printf("%5d",bitval );
		if(i==0)
			break;
	}
	printf("\n");
}

/*
int main()
{
	int  n = 10;
	show_bits(n);
}	
*/
