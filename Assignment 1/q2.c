// Given an unsorted array of integers, sort the array into a wave array.

#include<stdio.h>
int main()
{
    int arr[50],size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i+=2)
    {
        if(i>0 && arr[i-1]>arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
        if(i<size-1 && arr[i]<arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    printf("%d\n",&arr[-1]);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}