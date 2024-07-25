#include <stdio.h>
#include <stdlib.h>

void Max_heap(int arr[], int i, int n) 
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest]) 
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) 
    {
        largest = right;
    }
    if (largest != i) 
    {
        int swap = arr[i];
        arr[i] = arr[largest];
        arr[largest] = swap;
        Max_heap(arr, largest, n);
    }
}

void Build_max(int arr[], int n) 
{
    for (int i = n / 2 - 1; i >= 0; i--) 
    {
        Max_heap(arr, i, n);
    }
}

void heap_sort(int arr[], int n) 
{
    Build_max(arr, n);
    for (int i = n - 1; i > 0; i--) 
    {
        int swap = arr[0];
        arr[0] = arr[i];
        arr[i] = swap;
        Max_heap(arr, 0, i);
    }
}

int main() {
    int num_elements;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num_elements);

    int *arr = (int *)malloc(num_elements * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < num_elements; i++) 
    {
        scanf("%d", &arr[i]);
    }

    heap_sort(arr, num_elements);

    printf("Sorted array: ");
    for (int i = 0; i < num_elements; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); 

    return 0;
}