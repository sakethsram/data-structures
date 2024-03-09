#include<stdio.h>
int main()
{
	int i, j = 0, n = 3;

	printf("N value is:%d\n", n);

	for(i = 1; i <= n; i++)
	{
		if(n%i==0)
		{
			j++;
		}
	}

	if(j==2)
		printf("Number %d is PRIME\n", n);
	else
		printf("Number %d is NOT PRIME\n", n);
	return 0;
}
