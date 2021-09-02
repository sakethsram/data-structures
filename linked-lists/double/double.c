#include "stdio.h"
struct student 
{
	int no;
	struct student *n;
	struct student *p;
};	
