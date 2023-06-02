#include <stdio.h>
int main()
{
	int i, f=1, n = 5;

	printf("N value is :%d\n", n);

	for(i = 1; i <= n; i++)
	{
		f = f * i;
	}
	printf("%d\n", f);
	printf("Factorial value of %d is %d\n", n, f);
	return 0;
}

	
