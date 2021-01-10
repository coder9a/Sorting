#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int printarray(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int insertionsort(int a[], int n)
{
	int i,j,key;
	for(i=0;i<n;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}
int main()
{
	int arr[] = {21,31,83,54,56,78,7,90};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Array before sorting\n");
	printarray(arr,size);
	insertionsort(arr,size);
	printf("Array after sorting\n");
	printarray(arr,size);
	return 0;
}
