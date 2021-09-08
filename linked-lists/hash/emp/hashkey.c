#include "defs.h"
#include "stddef.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
extern struct student *h[4];
int hashkey(int v)
{
        int i=0;
        return  (tolower(v[0]-'a'));
}
