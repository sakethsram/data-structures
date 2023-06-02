#include<stdio.h>
int is_prime(int x)
{
	int i,count=0,:qj;
	for (i=1;i<=x;i++)
	{
		for(j=1;j<=n;j++)
			if (j%i==0)
			{
				count++;
			}
	}
	if(count==2)
		return x;
}
int main()
{
	int n=5,t=0;
	while(x<=5)
		t=is_prime(n);
	if(t==n)
		printf("Number %d is a PRIME\n",n);
	return 0;
}

