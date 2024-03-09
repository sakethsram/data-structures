#include "stdio.h"
 unsigned short int date_in_2_byte(int d,int m, int y)
{
	int da,date;
	y=2000+(date>>(5+4));
	m=(date>>4)& 0x1f;
	d= date & 0x1f;
	date=( ( ( ( y % 100 )<< 5 )+ m )<< 4 )+ d;

	printf("date: %d \n",date);
	printf("day: %d \n",d);
	printf("month: %d \n",m);
	printf("year: %d \n",y);
	da=date;
	return da;
} 

int main()
{
	int da,d=13,m=8,y=21;
	da=date_in_2_byte( d,m,y);
	printf("\n\n\n");
	printf("date :  %d \n", da);
}	


