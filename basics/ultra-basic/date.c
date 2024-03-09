#include"stdio.h"
int date=14, y=2003 , m=9;  
int main()
{
	int c,cn,yn ,mn,sl,flag,ld,rem,temp,sum;
	if(m==1)
		mn=0;
	
	if(m==2)
		mn=3;

	if(m==3)
		mn=3;
	
	if(m==4)
		mn=6;
	
	if(m==5)
		mn=1;
	
	if(m==6)
		mn=4;
	
	if(m==7)
		mn=6;
	
	if(m==8)
		mn=2;

	if(m==9)
		mn=5;
	
	if(m==10)
		mn=0;

	if(m==11)
		mn=3;

	if(m==12)
		mn=5;

	

	if(y%100==99)
		c=((y/100)/1) +1;
	if(y%100<=98)
		c=((y/100)/1) +1;
	if(y%100==0)
		c=((y/100)/1) +1;

	
	if(c%4==3)
		cn=2;
	if(c%4==0)
		cn=0;
	if(c%4==1)
		cn=6;
	if(c%4==2)
		cn=4;
	printf("\n");
	
	sl=y % 100;
	ld=sl / 4 ;
	sum= date + mn + cn + sl + ld;
	rem = sum % 7;

//	if(y%4==0 && (y%100 != 0 || y%400==0))
//		rem--;

	if (rem==0)
		printf("sunday\n");
	
	if (rem==1)
		printf("monday\n");

	if (rem==2)
		printf("tuesday\n");
	if (rem==3)
		printf("wednesday\n");
	if (rem==4)
		printf("thursday\n");
	if (rem==5)
		printf("friday\n");
	if (rem==6)
		printf("saturday\n");
}
	



