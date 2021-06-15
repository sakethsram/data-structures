#include <iostream>
using namespace std;
int main()
{
	int i=0,j=0,temp,flag,n=3;
	int a[ ]={8, 5, 0, -1, 5, 5, 1, 7, 6};
	n = sizeof(a)/sizeof(int);

	for(i=0;i<=n-1;i++)
		cout<<"  " <<  a[i];

	cout << endl;

	for(i = 0; i <= n-1; i++)
	{
		for(j = i+1; j <= n-1; j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<=n-1;i++)
		cout<<"  " << a[i];
	cout << endl;
}	
