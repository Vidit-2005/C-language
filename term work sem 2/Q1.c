/*
NAME 				                : Vidit Saran Agarwal
UNIVERSITY ROLL NO                  : 2023709         
SECTION.                       		: A

Q1:- Write a user define function in C to print all unique elements in an array. 
*/
#include<stdio.h>
int main()
{
    void unique(int[],int);
    int arr[50],size,i;
    printf("\t\t*******input********\n");
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    unique(arr,size);
    return 0;
}
void unique(int arr[],int size)
{
    int i,j,flag;
    printf("\t\t*******output********\n");
    printf("The unique elements in the array are: ");
    for(i=0;i<size;i++)
    {
        flag=0;
        for(j=0;j<size;j++)
        {
            if(i==j)
            {
                continue;
            }
            else if(arr[i]==arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",arr[i]);
        }
    }
}