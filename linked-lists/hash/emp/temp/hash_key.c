#include "defs.h"
#include "stddef.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int  hash_key_name( char *v)
{
	int i=0;
	return 	(tolower(v[0]-'a'));
}	
