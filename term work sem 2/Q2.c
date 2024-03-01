/*
NAME 				                : Vidit Saran Agarwal
UNIVERSITY ROLL NO                  : 2023709         
SECTION.                       		: A

Q2:- Write a program in C to separate odd and even integers into separate arrays 
*/
#include<stdio.h>
int main()
{
    int arr[50],size,i,even[50],odd[50];
    printf("\t\t*******input********\n");
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array is: \n");
    for(i=0;i<size;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
    printf("\t\t*******output********\n");
    int j=0,k=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
        }
    }
    printf("Even elements are: \n");
    for(i=0;i<j;i++)
    {
        printf("%d\t",even[i]);
    }
    printf("\nOdd elements are: \n");
    for(i=0;i<k;i++)
    {
        printf("%d\t",odd[i]);
    }
    return 0;
}