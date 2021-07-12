#include"stdio.h"
int date=1 , y=1321 , m=3;  
int main()
{
	int c,cn,yn ,mn,sl,flag,ld,rem,temp,sum;
	printf("date  :%d\n", date);
	printf("\n");
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
	printf(" mn  : %5d ", mn);
	printf("\n");

	

	if(y%100==99)
		c=((y/100)/1) +1;
	if(y%100<=98)
		c=((y/100)/1) +1;
	if(y%100==0)
		c=((y/100)/1) +1;
	printf(" c  : %5d ", c );
	printf("\n");

	
	if(c%4==3)
		cn=2;
	if(c%4==0)
		cn=0;
	if(c%4==1)
		cn=6;
	if(c%4==2)
		cn=4;
	printf(" cn : %5d  ", cn );
	printf("\n");
	
	sl=y % 100;
	ld=sl / 4 ;
	printf(" sl : %5d  ", sl );
	printf("\n");
	printf(" ld : %5d  ", ld );
	printf("\n");
	sum= date + mn + cn + sl + ld;
	printf(" sum : %5d\n", sum );
	rem = sum % 7;
	printf("rem :%5d\n", rem);

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
	



