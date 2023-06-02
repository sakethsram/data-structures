#include<stdio.h>

int main()
{
	int n = 23, t = 0;
	t = is_prime(n);

	if(t == n)
		printf("Number %d is PRIME\n", n);
	else
		printf("Number %d is NOT PRIME\n", n);

	return 0;
}

