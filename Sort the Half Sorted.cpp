#include<stdio.h>
int merge(int a[],int low, int mid, int high);
int mergesort(int a[],int i, int j);
void printarray(int *a, int n);
int main()
{
	int a[] = { 2, 3, 8, -1, 7, 10},n=6, i=0;
	printf("Given array is\n");
	printarray(a,n);
	merge(a,i,2,n-1);
	printf("Sorted array\n");
	printarray(a,n);
	return 0;
}
void printarray(int *a,int n)
{
	int i;
    for (i = 0; i < 6; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
int merge(int a[],int low, int mid, int high)
{
	int i,j,k,b[100];
	i = low;
	j = mid + 1;
	k = low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			b[k] = a[i];
			k++,i++;
		}
		else
		{
			b[k] = a[j];
			k++,j++;
		}
	}
	while(i<=mid)
	{
		b[k] = a[i];
		k++,i++;
	}
	while(j<=high)
	{
		b[k] = a[j];
		k++,j++;
	}
	for(i=low;i<=high;i++)
	{
		a[i] = b[i];
	}
}
