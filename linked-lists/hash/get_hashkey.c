#include "stdio.h"
#include "defs.h"
#include "stddef.h"
#include "stdlib.h"
extern struct student *h[4];
int get_hashkey(int v)
{
	if(v>100 || v<0 )
		return 3;
	return v/25;
}
