#include<stdio.h>
int main()
{
	int a=626,b=0,c=a;
	b=(b*10)+(a%10);
	a=a/10;
	b=(b*10)+(a%10);
	a=a/10;
	b=(b*10)+(a%10);
	if(c==b)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	return 0;
}
