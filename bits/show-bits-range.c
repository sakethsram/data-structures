#include "stdio.h"
#include "defs.h" 
int show_bits_range(int n, int spos, int epos)
{
	int i=0, bp=0, bitval = 0;
	static int flag = 0;

	if (flag == 0)
	{
		//	printf("%3s: ", "pos");
		//for(i = epos ; i >= spos ; i--)
			//printf("%3d", i);
		//printf("\n");
		//flag++;
	}

	printf("%3d: ", n);
	for(i = epos ; i >= spos ; i--)
	{
		bp = i;
		bitval = get_bit_val_by_pos(n,  bp);
		printf("%3d",bitval );
		if(i==0)
			break;
	}
	printf("\n");
	printf("\n");
}
