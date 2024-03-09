#include "stdio.h"
#include "defs.h"

int get_byte( int n, int byte_pos)
{
	int temp=(byte_pos-1)*8 ;
	int t=n>>temp;
	int m= 0x000000FF;
	int res=t&m;
	return res;
}	


