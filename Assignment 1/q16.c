// Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum,using function.

#include<stdio.h>
int main()
{
    void sub(int[],int,int);
    int arr[50],size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum;
    printf("enter the sum: ");
    scanf("%d",&sum);
    sub(arr,size,sum);

    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void sub(int arr[],int size,int sum)
{
    for(int i=0;i<size;i++)
    {
        int csum=arr[i];
        for(int j=i+1;j<size;j++)
        {
            if(csum==sum)
            {
                printf("the subarray is from %d to %d\n",i,j-1);
                return;
            }
            if(csum>sum || j==size)
            {
                break;
            }
            csum+=arr[j];
        }
    }
}