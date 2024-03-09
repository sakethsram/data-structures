#include"stdio.h"

int astrlen(char *p);

int main()
{
	char name[]= "Saketh Ram";
	int len = astrlen(name);

	printf("%d is the length of string :%s\n", len, name);
}	
