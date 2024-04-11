#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n - 1; i++) 
    {
        int min = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min]) 
            {
                min = j;
            }
        }
        int swap = arr[i];
        arr[i] = arr[min];
        arr[min] = swap;   
        }

    printf("The sorted array :\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ",arr[i]);
    }

    return 0;
}