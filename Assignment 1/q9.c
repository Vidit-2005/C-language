// Write a program in C to replace the spaces in a string with a specific character.

#include<stdio.h>
#include<string.h>
int main()
{
    char arr[50];
    printf("enter the string: ");
    fgets(arr,50,stdin);
    for(int i=0;i<strlen(arr)-2;i++)
    {
        if(arr[i]==' ')
        {
            arr[i]='*';
        }
    }
    printf("The string after replacing the spaces with * is: %s",arr);
    return 0;
}