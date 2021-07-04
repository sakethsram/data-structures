#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0,temp,flag,n,t;
    int a[ ]={8, 2,5,7,6};
    n = sizeof(a)/sizeof(int);
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        flag=0;
        for(j=i-1;j>=0;j--)
        {
               if(temp<=a[i])
               {
                a[j+1]=a[j];
               }
               else
               {
                   a[j+1]=temp;
                   flag=1;
                   break;
               }
        }
    }
        if(flag!=0)
      a[j]=temp;

    for(t=0;t<=n-1;t++)
        cout<<"  "<<a[i]<<" , ";
    cout<<endl;
}

            


