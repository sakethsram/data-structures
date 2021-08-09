#include "stdio.h"
int get_bit_val_by_pos( int n , int bp  )
{
	int m=1, t=m<< bp  , res= n  &  t ; 
	if(res==0)
		return 0 ;
	return 1 ;
}
int main()
{
	int m = 1 , n = 10 ;
	int a = get_bit_val_by_pos(  n = 10 ,  m = 1 );
		printf(" \n  %d :    " ,   a ) ;
}	
