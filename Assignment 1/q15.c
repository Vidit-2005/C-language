// Write a program in C to copy one string to another using recursion.

#include<stdio.h>
#include<string.h>
int main()
{
    void cpy(char[],char[],int);
    char str[100],str1[100];
    int length;
    fgets(str,100,stdin);
    length=strlen(str);
    cpy(str,str1,length-2);
    str1[length-1]='\0';
    printf("The copied string is %s",str1);
    return 0;
}
void cpy(char str[],char str1[],int length)
{
    if(length<0)
    {
        return;
    }
    str1[length]=str[length];
    cpy(str,str1,length-1);
}