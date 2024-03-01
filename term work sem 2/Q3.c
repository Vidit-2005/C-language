/*
NAME 				                : Vidit Saran Agarwal
UNIVERSITY ROLL NO                  : 2023709         
SECTION.                       		: A

Q3:- Write a program in C to find the sum of the lower triangular elements of a matrix.
*/
#include<stdio.h>
int main()
{
    int a[10][10],i,j,n,sum=0;
    printf("\t\t*******input********\n");
    printf("enter the order of the matrix\n");
    scanf("%d",&n);
    printf("enter the elements of the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the elements of the matrix are\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("\t\t*******output********\n");
    printf("the sum of the lower triangular elements of the matrix is %d\n",sum);
    return 0;
}