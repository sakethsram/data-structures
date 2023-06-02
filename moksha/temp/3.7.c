#include<stdio.h>
int main()
{
	int i=2,j=1,k,sum=0,n;
	for(i=2;i>j;i++)
	{
		k = factorial(i)/factorial(j);
		sum=sum+k;
		printf("%d\t",k);
		j=n;
		j++;
	}
	printf("\n");
	printf("sum = %d",sum);
	printf("\n");
	return 0;
}

