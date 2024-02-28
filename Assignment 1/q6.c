// Write a program in C to print or display the lower triangular of a given matrix.

#include<stdio.h>
int main()
{
    int n,a[10][10];
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
    printf("the lower triangular matrix is: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {
                printf("%d \t",a[i][j]);
            }
            else
            {
                printf("0 \t");
            }
        }
        printf("\n");
    }
    return 0;
}