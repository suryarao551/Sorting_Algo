#include<stdio.h>

int partition(int low,int high,int stack[])
{
    int i,j;
    i=low;
    j=high+1;
    int pivot = stack[low];
    while(i<j)
    {
        do
        {
            i++;
        }while(stack[i]<pivot);
        do
        {
            j--;
        }while(stack[j]>pivot);
        if(i<j)
        {
            int swap;
            swap =stack[i];
            stack[i]=stack[j];
            stack[j]=swap;
        }
    }
    int swap1;
    swap1 = stack[low];
    stack[low] = stack[j];
    stack[j] = swap1;
    return j;
}

void quicksort(int low,int high,int stack[])
{
    int k;
    if(low<high)
    {
        k = partition(low,high,stack);
        quicksort(low,k-1,stack);
        quicksort(k+1,high,stack);
    }
}

int main()
{
    int n;
    printf("Enter the size of the stack = ");
    scanf("%d",&n);

    int stack[n];
    printf("Enter the elements in the stack :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&stack[i]);
    }
    printf("The stack :\n");
    for(int i=0;i<n;i++)
    {
        printf("|  %d  |\n",stack[i]);
    }

    quicksort(0,n-1,stack);

    printf("Sorted stack .. \n");

    for(int i=0;i<n;i++)
    {
        printf("|  %d  |\n",stack[i]);
    }

    return 0;
}