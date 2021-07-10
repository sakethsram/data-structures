#include "stdio.h"

int r = 4, c = 3;
int a[4][3] = {
	{5, 100, 3},
	{400, 5, 9},
	{10, 8, 9},
	{190, 345, 39}
};

int dump_array()
{
	int i = 0, j = 0;

	printf("\n");
	for(i = 0; i <= r-1; i++)
	{
		for(j = 0; j <= c-1; j++)
		{
			//printf("%d", a[i][j]);
			//printf("%d\n", a[i][j]);
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	dump_array();
	dump_array();
}
