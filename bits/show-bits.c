#include "stdio.h"
#include "defs.h" 
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
