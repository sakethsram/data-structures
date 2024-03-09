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
int show_bits(  int n )
{
	int i=7, bp=0, bitval =0 , temp=1;
	for(i = 7 ; i >= 0 ; i--,temp++)
	{
		bp = i;
		bitval = get_bit_val_by_pos(n,  bp);
		printf( "   %d ",bitval );
	}
}
int main()
{
	int  a = 02 , b=03 ;
	printf(" the value of A is =");
	show_bits(a);
	printf(" the value of B is =");
	show_bits(b);
}	
