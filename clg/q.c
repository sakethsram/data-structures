#include <stdio.h>
void swap(int* a, int* b)
{
	int t = *a
	*a = *b;
	*b = t;
}

int partition(int a[], int l, int h)
{
	int p = a[h];
	int i = (l - 1);
	for (int j = l; j <= h - 1; j++)
	{
		if (a[j] < p) 
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i + 1], &a[h]);
	return (i + 1);
}
void quickSort(int a[], int l, int h)
{
	if (l < h) {
		int pi = partition(a, l, h);
		quickSort(a, l, pi - 1);
		quickSort(a, pi + 1, h);
	}
}
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main() {
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
