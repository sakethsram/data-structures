#include "stdio.h"
int add(int a ,int b)
{   
    int j=0;
    j= a+b;
    printf(" j= %d \n",j );
    return j;
}
int sub(int a ,int b)
{   
    int j=0;
    j= a-b;
    printf(" j= %d \n",j );
    return j;

}

int div(int a ,int b)
{
    int j=0;
    j= a/b;
    printf(" j= %d \n",j );
     return j;
}
int mul(int a ,int b)
{   
    int j=0;
    j= a*b;
    printf(" j= %d \n",j );
    return j;
}

int main(void)
{
    int a=5,b=10;
    int n;
    add(a,b);
    sub(a,b);
    div(a,b);
    mul(a,b);
    printf("\n\n");
}

