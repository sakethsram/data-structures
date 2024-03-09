
#include <stdio.h>
#include<stdlib.h>
struct p
{
    int x,y;
};

struct r
{
  struct p ul,lr;
};


int a(struct r x)
{
    int a=  (x.ul.x) + (x.lr.x) *  (x.ul.y)+(x.lr.y) ;
    return a;
}

void main()
{
   struct r i;
   i.ul.x=4;
   i.ul.y=3;
   i.lr.x=2;
   i.lr.y=1;    
   printf("\n area= %d \n",a(i));    
}

