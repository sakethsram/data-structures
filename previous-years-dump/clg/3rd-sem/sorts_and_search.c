#include "stdio.h"
void b_sort(int *a)
{
	int i=0,j=0,t=0,n=5;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}	
}
int bs(int *a, int s)
{
	int i,j,l=0,m, h = 5-1,flag=0;
	while(l<=h)
	{
		m=(l+h)/2;
		if(s==a[m])
			flag=1;
		if(s<a[m])
			h=m-1;
		l=m+1;
	}
	return flag; 
}
void array_dump(int *a)
{
	int i=0;
	for(i=0;i<=4;i++)
		printf("%d	",i);
	printf("\n");		
	for(i=0;i<=4;i++)
		printf("%d	",a[i]);
	printf("\n");		
}
int main()
{
	int a[5]={3,2,8,9,11};
	array_dump(a);
	printf("\n");		
	printf("\n");		
	b_sort(a);
	array_dump(a);
	bs(a, 9);
	return 0;
}
