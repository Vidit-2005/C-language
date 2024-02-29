// Write a program in C to check if a number is a prime number or not using recursion.

#include<stdio.h>
int main()
{
    int prime(int,int);
    int num,check;
    printf("Enter the number:");
    scanf("%d",&num);
    check=prime(num,num/2);
    if(check==1)
    {
        printf("%d is a prime number\n",num);
    }
    else
    {
        printf("%d is not a prime number\n",num);
    }
    return 0;
}
int prime(int num,int i)
{
    if(i==1)
    {
        return 1;
    }
    else if(num%i==0)
    {
        return 0;
    }
    else
    {
        i=i-1;
        return prime(num,i);
    }
}