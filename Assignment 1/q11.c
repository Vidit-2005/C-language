// Write a program in C to print the array elements using recursion.

#include<stdio.h>
int main()
{
    void prt(int[],int,int);
    int arr[50],n;
    printf("Enter the size of the elemeent ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the eleement: ");
        scanf("%d",&arr[i]);
    }
    prt(arr,n,0);
    return 0;
}
void prt(int arr[],int n,int s)
{
    if(s<n)
    {
       printf("%d\t",arr[s]); 
    }
    prt(arr,n,s+1);
}