#include<stdio.h>

int main()
{
	int n = 20, i = 0,sum=0;
	for (i = 1; i <= n; i++)
	{
		if(is_prime(i) == i)
		{
			sum=sum+i;
			printf("%d  ", i);
		}
	}
	printf("\n");
	printf("sum = %d  ", sum);
	printf("\n");
	return 0;
}

