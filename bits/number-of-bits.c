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
	int i=31, bp=0, bitval =0 , temp=0 ,flag=0;
	for(i = 31 ; i >= 0 ; i--,temp++)
	{
		bp = i;
		bitval = get_bit_val_by_pos(n,  bp);
		printf("  %d ",bitval );
		if(bitval==1)
			temp++;
		if(temp>=1)
			flag++;
		if(i==0)
			break;
	}
	printf("\n the number of bits are = 3 ");
}

int main()
{
	int  n = 4;
	show_bits(n);
}	
