#include "stdio.h"
int greatest(int a ,int b ,int c)
{
	if (a>b && a>c)
			printf("\n a is biggest \n");
	 if (b>a && b>c)
			printf("\n b is biggest \n");
	 if (c>b && c>b)
		 printf("\n c is biggest \n");
 	return 0;
}	
int main()
{
	 greatest(2,3,4);
}		
