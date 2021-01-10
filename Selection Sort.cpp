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
int selectionsort(int *a, int n)
{
	int i,j,min;
	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		swap(&a[i],&a[min]);
	}
}
int main()
{
	int arr[] = {21,31,83,54,56,78,7,90};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Array before sorting\n");
	printarray(arr,size);
	selectionsort(arr,size);
	printf("Array after sorting\n");
	printarray(arr,size);
	return 0;
}
