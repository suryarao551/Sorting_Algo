#include<stdio.h>

void merge_sort(int low, int mid, int high, int arr[]) {
    int temp[100];
    int i = low;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= high) 
    {
        if (arr[i] <= arr[j]) 
        {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid) 
    {
        temp[k++] = arr[i++];
    }
    while (j <= high) 
    {
        temp[k++] = arr[j++];
    }
    for (i = low,k=0; i <= high; i++,k++) 
    { 
        arr[i] = temp[k];
    }
}

void merge(int low,int high,int arr[])
{
    int mid;
    if(low<high)
    {
        mid = (low+high) / 2;
        merge(low,mid,arr);
        merge(mid + 1,high,arr);
        merge_sort(low,mid,high,arr);
    }
}
int main()
{
    int n;
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array = \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    merge(0,n-1,arr);

    printf("The sorted array :\n");

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}