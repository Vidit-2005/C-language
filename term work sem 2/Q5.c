/*
NAME 				                : Vidit Saran Agarwal
UNIVERSITY ROLL NO                  : 2023709         
SECTION.                       		: A

Q5:- Write a program in C to split string by space into words.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("\t\t*******input********\n");
    printf("Enter the string\n");
    fgets(str,100,stdin);
    printf("\t\t*******output********\n");
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}