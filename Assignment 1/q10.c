// Write a program in C to extract a substring from a given string.

#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    int start,end;
    printf("enter the starting index : ");
    scanf("%d",&start);
    printf("enter the ending index : ");
    scanf("%d",&end);
    printf("The substring is : ");
    for(int i=start;i<=end;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}