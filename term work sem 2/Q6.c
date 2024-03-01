/*
NAME 				                : Vidit Saran Agarwal
UNIVERSITY ROLL NO                  : 2023709         
SECTION.                       		: A

Q6:- Write a user define function to find the highest frequency character in a string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,count[256]={0},max=0;
    printf("\t\t*******input********\n");
    printf("Enter the string\n");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        count[str[i]]++;
    }
    printf("\t\t*******output********\n");
    for(i=0;i<256;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            ch=i;
        }
    }
    printf("The highest frequency character is %c\n",ch);
}