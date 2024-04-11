#include<stdio.h>
void bubblesort(int arr[],int n)
{
    for(int k=1;k<=n;k++)
    {
        int ptr = 0;
        while (ptr < n-k)
        {
            if (arr[ptr] > arr[ptr+1])
            {
                int a = arr[ptr];
                arr[ptr] = arr[ptr+1];
                arr[ptr+1]= a;
            }
            ptr++;
        } 
    }
}
int main()
{
    int n;
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of the array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}