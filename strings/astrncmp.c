#include "stdio.h"
int astlower( char ch)
{
	if(ch >=97 && ch<=122)
		return ch-32;
	return ch;
}
int main()
{
	int i,j,t1,t2,temp=0 ,n = 3;
	char s1[]="saketh1"; 
	char s2[]="SAKETH1";
	for(i=0, j=0 ; s1[i]!='\0' && s2[i]!='\0' && i<=n-1 && j<=n-1 ; i++,j++)
	{
		 t1= astlower( s1[i] );
		 t2= astlower( s2[i] );
		 if( t1==t2)
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


