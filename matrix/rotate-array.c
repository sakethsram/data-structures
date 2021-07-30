#include <stdio.h>
int c;
int a[] = {4};

int dump_array()
{
	int i = 0;
	c = sizeof(a)/sizeof(int);
    int n=c-1;
	printf("\n");
	for(i = 0; i <= c-1; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
	return 0;
}

	
int rotate_row(int *p, int n)
{
	int i = 0, j = 0, temp;

	for (i = 0; i <= (n/2)-1; i++)
	{
 		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}

	return 0;
}

int main()
{
	int n = 0;
	dump_array();
	n = sizeof(a)/sizeof(int);
	rotate_row(a, n);
	dump_array();
}	


