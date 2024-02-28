// Write a program in C for the multiplication of two square matrices.

#include<stdio.h>
int main()
{
    int arr[50][50],row,col;
    printf("enter the row and col of the array: ");
    scanf("%d %d",&row,&col);
    printf("enter the elements of the array: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the elements of the array(A) are: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int arr1[50][50],row1,col1;
    printf("enter the row and col of the array: ");
    scanf("%d %d",&row1,&col1);
    printf("enter the elements of the array: ");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("the elements of the array(B) are: \n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    if(col!=row1)
    {
        printf("multiplication is not possible");
    }
    else
    {
        int arr2[50][50];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col1;j++)
            {
                arr2[i][j]=0;
                for(int k=0;k<col;k++)
                {
                    arr2[i][j]+=arr[i][k]*arr1[k][j];
                }
            }
        }
        printf("the elements of the array(A*B) are: \n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col1;j++)
            {
                printf("%d ",arr2[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}