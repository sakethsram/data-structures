#include "stdio.h"
#include "defs.h"

int x_and_y(int x , int y)
{
	int i,j,a,b,t=0;
	for(i=2;i>=0;i--)
	{
		a=get_bit_val_by_pos(x,i);
		printf("a :%d  \n",a);
		b=get_bit_val_by_pos(y,i);
		printf("b :%d  \n",b);

		if(a!=b)
		{
			t=a|b;
			(t==1 ? 0:1);
			a=0;
			b=0;
		}
		else
			t=a;

		printf("\n");
	}
		printf("\n");
	for(j=2;j>=0;j--)
	printf("%d",t);
		printf("\n");
}		
	


