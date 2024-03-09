int *a;
int *b;
int *c;
	n=10
int add(int *a,int *b)
{
	int i,j;
	for(i=0; i<=n ; i++)
	{
		for( j=0;j<=n;j++)
			c[i][j]=a[i]+b[j];         
	}
}

int mul( int *a,int *b)
{
	int i=0,j=0,k=0;
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < n; k++) 
				c[i][j] = c[i][j]+( a[i][k] * b[k][j]);
		}
	}  
}
