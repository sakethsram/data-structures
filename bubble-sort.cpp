#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0,temp,flag,n;
    int a[ ]={8, 5, 0, -1, 5, 5, 1, 7, 6};
    n = sizeof(a)/sizeof(int);

    for(i=0;i<=n-1;i++)
        cout<<"  " <<  a[i];

    cout << endl;

    for(i = 0; i <= n-1; i++)
    {
        for(j = 0; j <=n-i-2; j++)
        {
            if(a[j] > a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<=n-1;i++)
        cout<<"  " << a[i];
    cout << endl;
}   
