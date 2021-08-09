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
		printf("%3d", i);
	printf("\n");
	for(i = 31 ; i >= 0 ; i--)
	{
		bp = i;
		bitval = get_bit_val_by_pos(n,  bp);
		printf("%3d",bitval );
		if(i==0)
			break;
	}
	printf("\n");
}
int get_bit_count(int n)
{
	int i = 0, bc = 0, bp = 0, bitval;

	for(i = 31; i >= 0; i--)
	{
		bp = i;
		bitval = get_bit_val_by_pos(n,  bp);
		if (bitval == 1)
			bc = bc + 1;
	}
	return bc;
}
int main()
{
	int a=4,b;
	b= get_bit_count(a);
	printf("\n bc= %d ",b);
}
