#include<stdio.h>
int main()
{
	int a=426,b=0;
	b=b+(a%10);
	a=a/10;
	b=b+(a%10);
	a=a/10;
	b=b+(a%10);
	printf("%d",b);
	return 0;
}
