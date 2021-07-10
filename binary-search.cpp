#include <iostream>
using namespace std;
int selection_sort(int *p, int n);
void dump_array(int *p, int n);
int main()
{

	int sval = 80;
	int i=0,j=0,temp,n;
	int a[ ]={5, 9, 13, 14, 18, 19, 31, 50, 60,70,80};
	n = sizeof(a)/sizeof(int);
	int ll, ul, midp, midv, flag;

	dump_array(a, n);
	selection_sort(a, n);
	dump_array(a, n);

	ul=n-1;
	ll=0;
	midp = (ul + ll) / 2;

	for(flag=0;ul!=ll;flag++)
	{
		printf ("\nIteration :%d\n", flag+1);
		printf("1. ll :%d, ul :%d, midp :%d, midv :%d\n", ll, ul, midp, a[midp]);
		if(a[ul]=sval)
		{
			printf("THE VALUE IS FOUND AT :  :%d\n" ,ul);
			break;
		}
		
		if(a[midp] == sval)
		{
			printf("2. ll :%d, ul :%d, midp :%d, midv :%d\n", ll, ul, midp, a[midp]);
			printf("THE VALUE IS FOUND AT :  :%d\n" ,midp);
			break;
		}

		if(a[midp] > sval)
		{
			printf("3. ll :%d, ul :%d, midp :%d, midv :%d\n", ll, ul, midp, a[midp]);
			ul=midp;
			midp = (ul + ll) / 2;
		}

		if(a[midp] < sval)
		{
			printf("4. ll :%d, ul :%d, midp :%d, midv :%d\n", ll, ul, midp, a[midp]);
			ll=midp;
			midp = (ul + ll) / 2;
		}
		
	}		

	if(ul==ll)
		cout<<"the number is not present"<<endl;
}   
