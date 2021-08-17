# 1 "fact.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "fact.c"
# 1 "defs.h" 1
int fact(int n);
# 2 "fact.c" 2
int fact(int n)
{
 int i=1,temp=1;
 for(i=1;i<=n;i++)
  temp=temp*i;
 return temp;
}
int main()
{
 int a,n=5;
 a=fact(n);
 printf("\n factorial = %d \n\n",a);
}
