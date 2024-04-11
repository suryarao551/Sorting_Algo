#include<stdio.h>
void bucketsort(int arr[],int n)
{
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    int brr[max+1];
    for(int i=0;i<=max;i++)
    {
        brr[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        brr[arr[i]]++;
    }
    for(int i=0;i<=max;i++)
    {
        while(brr[i]>0)
        {
            printf("%d",i);
            brr[i]--;
        }
    }
}
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
    printf("Sorted array :\n");
    bucketsort(arr,n);

    return 0;

}