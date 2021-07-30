#include "stdio.h"
int r = 3, c = 3;
int a[3][3] = 
{
	{1, 4, 7},
	{2, 5, 8},
	{3, 6, 9},
};


int dump_array()
{
	int i = 0, j = 0;

	printf("\n");
	for(i = 0; i <= r-1; i++)
	{
		for(j = 0; j <= c-1; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;	
}


int transpose()
{
	int i, j, temp;
	for(i = 0; i <= r-1; i++)
	{
		for(j = i; j <= c-1; j++)
		{
			temp= a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	return 0;	
}	

int rotate_row(int *p, int n)
{
	int i = 0, j = 0, temp;

	for (i = 0; i <= (n/2)-1; i++)
	{
 		temp=p[i];
		p[i]=p[n-i-1];
		p[n-i-1]=temp;
	}

	return 0;
}

int rotate_rows()
{
	int k;
	int i = 0, n = 0;

	for(i = 0; i <= r-1; i++)
	{
		n = sizeof(a[i])/sizeof(int);
		rotate_row(a[i], n);
	}
	return 0;
}  

int main()
{
	int i,j,temp,k;

    printf("Base Rectangle");
	dump_array();

	transpose();

	printf("After transpose...\n");
	dump_array();

	rotate_rows();

	printf("After Rotation...\n");
	dump_array();
}	


