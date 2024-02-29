// Write a C program to check whether a given string is a palindrome or not using recursion.

#include<stdio.h>
#include<string.h>
int main()
{
    int check(char[],int,int);
    char str[100];
    int i,length,flag;
    fgets(str,100,stdin);
    length=strlen(str);
    flag=check(str,length-2,0);
    if(flag==1)
    {
        printf("The string is a palindrome\n");
    }
    else
    printf("The string is not a palindrome\n");
    return 0;
}
int check(char str[],int length,int index)
{
    if(str[index]!=str[length-index])
    {
        return 0;
    }
    if(index==length)
    {
        return 1;
    }
    return check(str,length,index+1);
}