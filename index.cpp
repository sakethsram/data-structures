#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0,temp,flag,n=5,a[5];
    //int a[ ]={8, 5, 0, -1, 5, 5, 1, 7, 6};
    //n = sizeof(a)/sizeof(int);

    for(i=1;i<=n-1;i++)
    {
        for(j=i-1;j>=0;j--)
        {
                cout<<" " <<i<<" , "<<j;
                }  
        cout << endl;
        }
}   

