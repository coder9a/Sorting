#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int bubblesort(int a[], int n)
{
	int i,j;
	
	for (i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			swap(&a[j],&a[j+1]);
		}
	}
}
int main()
{
	int arr[] = {21,31,83,54,56,78,7,90};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Array before sorting\n");
	printarray(arr,size);
	bubblesort(arr,size);
	printf("Array after sorting\n");
	printarray(arr,size);
	return 0;
}
