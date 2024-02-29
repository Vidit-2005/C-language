// Write a program in C to replace the spaces in a string with a specific character using function.

#include<stdio.h>
#include<string.h>
int main()
{
    void relp(char[],char);
    char arr[50],a;
    printf("enter the string: ");
    fgets(arr,50,stdin);
    printf("enter the character to replace the spaces with: ");
    scanf("%c",&a);
    relp(arr,a);
    printf("The string after replacing the spaces with * is: %s",arr);
    return 0;
}
void relp(char arr[],char a)
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        {
            arr[i]=a;
        }
    }
}