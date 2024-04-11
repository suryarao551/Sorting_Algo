#include <stdio.h>
void InsertionSort(int arr[], int n)
{
	int key,j;
	for (int i = 1; i < n; i++) 
	{
		key = arr[i];
		j = i-1;
		while (j > -1 && arr[j] > key) 
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
int main()
{
	int n;
	printf("Enter the size of the array = ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array : \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	InsertionSort(arr, n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}
