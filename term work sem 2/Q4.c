/*
NAME 				                : Vidit Saran Agarwal
UNIVERSITY ROLL NO                  : 2023709         
SECTION.                       		: A

Q4:- Write a program in C to find the max element of each row of a matrix.
*/
#include<stdio.h>
int main()
{
    int arr[10][10],i,j,r,c,max;
    printf("\t\t*******input********\n");
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The elements of the matrix are\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\t\t*******output********\n");
    for(i=0;i<r;i++)
    {
        max=arr[i][0];
        for(j=0;j<c;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        printf("The maximum element of row %d is %d\n",i+1,max);
    }
    return 0;
}