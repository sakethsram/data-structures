#include<stdio.h>
int main()
{
	int i=0,n=10,sum=0,count=0;
	for(i=1;count<=n;i++)
	{
		if(is_prime(i)==i)
		{
		sum=sum+i;
		printf("%d\n",i);
		count++;
		}
	}
	printf("\n");
	printf("sum = %d  ",sum);
	printf("\n ");
	return 0;
}

