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
		printf("%d......\n", i+1);
	}
	return 0;	
}	

int rotate_rows()
{
	int k;
	int i = 0,j = 0, temp = 0;

	for(i = 0; i <= r-1; i++)
	{
		k = r - 1;
		for(j = 0;j <= k-1; j++)
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
			k = k - 1;
		}
	}
	return 0;
}  

int main()
{
    printf("first");
	int i,j,temp,k;

	dump_array();
	transpose();
	dump_array();
	rotate_rows();
	dump_array();
    //printf("after transpose");
}	


