#include<stdio.h>
int is_prime(int x)
{
	int i, j = 0;

	for(i = 1; i <= x; i++)
	{
		if(x%i == 0)
		{
			j++;
		}
	}

	if(j == 2)
		return x;
	else
		return 0;
}

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

