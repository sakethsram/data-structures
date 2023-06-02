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
