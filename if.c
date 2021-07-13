#include<stdio.h>
int main()
	{
		int m , p,c,j;
		m=34;
		p=35;
		c=35;
		j=0;
		if(m>=35)
		{
			j=j+1;
			if(p>=35)
			{
				j=j+1;
				if(c>=35)
				{
	 				j=j+1;
					if(j==3)
					{	
						printf("promoted");
						printf("\n");
					}	
				}
			}	
		}
		if(j!=3)
		{
			printf(" not promoted");
			printf("\n");
		}
	}	


