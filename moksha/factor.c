#include<stdio.h>
int factorial(int x)
{
	int  i, f = 1;

	for(i = 1; i <= x; i++)
	{
		f = f * i;
	}

	return(f);
}
int main()
{
	int n = 5, t = 0;
	t = factorial(n);
	printf("Factorial value of %d is %d\n", n, t);
	return 0;
}
