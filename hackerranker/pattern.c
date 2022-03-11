#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int i,j,temp,m,n,flag;
	//scanf("%d",&n);
	temp=n;
	m = n+(n-1);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i<=n-1)
			{        
				if(i==0)
					printf("%d ",temp);
				if(i>=1)
				{
					if(j<i)
						printf("%d ",temp-j);
					else if(j>=i && j<m-i)
						printf("%d ",temp-i);
					else 
						printf("%d ",(j-temp+1)+1);
				}
			}
			else if(i==n-1)
			{
				if(j<n)
					printf("%d ",temp-j);
				else
					printf("%d ",(j-temp+1)+1);
			}
			else if(i>=n)
			{
				flag = m-i-1;
				if(i==m)
					printf("%d ",temp);
				if(j<flag)
					printf("%d ",temp-j);
				else if(j>=flag && j<m-flag)
					printf("%d ",temp-flag);
				else 
					printf("%d ",(j-temp+1)+1);
			}
		}
		printf("\n");
	}
}
