#include "stdio.h"

int get_bit_val_by_pos(int n, int bp)
{
	int mask = 1, t, res;

	t = mask << bp;
	res = n & t; 

	
	if(res==0)
		return 0 ;
	return 1 ;
}

int show_bits( int n )
{
	int i=7, bp=0, bitval =0 , temp=0;
	for(i = 7 ; i >= 0 ; i--)
	{
		bp = i;
		bitval = get_bit_val_by_pos(n,  bp);
		printf("  %d ",bitval );
		if(bitval ==1 )
			temp++;
	}
	printf(" \n the number of 1's are : %d ", temp );
	printf(" \n  " );

}

int main()
{
	int  n = 10;
	show_bits(n);
}	
