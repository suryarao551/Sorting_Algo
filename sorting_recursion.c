#include<stdio.h>

int sort(int arr[], int n) 
{
    if (n <= 1) 
    {
        return 0;
    }

    sort(arr, n - 1);

    int k = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > k) 
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = k;
}

int main() {
    int n;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in the array = \n");

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) 
    {
        printf(" %d ", arr[i]);
    }

    sort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}
