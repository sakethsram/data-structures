#include "stdio.h"
int main()
{
	int i,j,t1,t2,temp=0;
	char s1[]="saketh1"; 
	char s2[]="SAKETH1";
	for(i=0, j=0 ; s1[i]!='\0' && s2[i]!='\0' ; i++,j++)
	{
		if( s1[i]==s2[i])
		  	temp++;
		 else
			 break;
	}
		printf("%s \n",s1);
		printf("%s \n",s2);
	if(temp > 0)
		printf(" same \n ");
	else
		printf(" not same \n ");
}


