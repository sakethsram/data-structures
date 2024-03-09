#include <stdio.h>
int main()
{
	int min=1,max=5,count,i,j,sum=0;
	printf("enter min and max values");
	for(i=min;i<=max;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==2)
		{
			printf("%d\n",i);
	        sum=sum+i;
		}
		printf("%d\n",sum);
	}
	return 0;
}
		
