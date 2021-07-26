#include"stdio.h"
int dec_to_bin( int n)
{
	int temp,i,j,a[64];
	for( i=0 ; n>0 ; n/=2,i++)
	{
		temp=n%2;
	 // printf(" temp value = %d \n",temp );
		a[i]=temp;
	}
	for(j=i-1; j >= 0 ;j--)
	  printf(" %d ",a[j]);
	printf("\n");
}
int main()
{
	dec_to_bin( 300 );

}		



