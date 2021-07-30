#include <iostream>
using namespace std;
void dump_array(int *p, int n)
{
	int i;
	for(i=0;i<=n-1;i++)
        cout<<"  " <<  p[i];

    cout << endl;
}	
int selection_sort(int *p, int n)
{
	int i, j, temp;
    for(i = 0; i <= n-1; i++)
    {
        for(j = i+1; j <= n-1; j++)
        {
            if(p[i] > p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
	return 0;
}
/*
int main()
{
    int i=0,j=0,temp,flag,n;
    int a[ ]={8, 5, 0, -1, 5, 5, 1, 7, 6};
    n = sizeof(a)/sizeof(int);
    
	for(i=0;i<=n-1;i++)
        cout<<"  " <<  a[i];

    cout << endl;

    selection_sort(a, n);
    
    for(i=0;i<=n-1;i++)
        cout<<"  " << a[i];
    cout << endl;
}
*/
