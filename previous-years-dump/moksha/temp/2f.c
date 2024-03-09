#include<stdio.h>

int main()
{
	int n=20,i,j=0;
	for(i=1;i<=n;i++)
	{
		j=factorial(i);
		printf("%d\t",j);
	}
	printf("\n");
	return 0;
}

