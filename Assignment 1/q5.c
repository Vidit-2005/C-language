// Write a program in C to find the sum of the right diagonals of a matrix.

#include<stdio.h>
int main()
{
    int n,a[10][10],sum=0;
    printf("enter the size of the matrix: ");
    scanf("%d",&n);
    printf("enter the elements of the matrix: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the elements of the matrix are: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i][i];
    }
    printf("the sum of the right diagonal is: %d\n",sum);
    return 0;
}