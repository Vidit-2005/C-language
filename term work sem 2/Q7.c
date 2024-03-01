/*
NAME 				                : Vidit Saran Agarwal
UNIVERSITY ROLL NO                  : 2023709         
SECTION.                       		: A

Q7:- Write a program to remove characters from a string except alphabets.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    int i,j=0;
    printf("\t\t*******input********\n");
    printf("Enter the string: ");
    fgets(str,100,stdin);
    printf("the entered string is : ");
    puts(str);
    printf("\t\t*******output********\n");
    for(i=0;str[i]!='\0';i++)
    {
        if(!((str[i]>='a' && str[i]<='z')||(str[i]>='A'&& str[i]<='Z')))
        {
            for(int j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
    }
    printf("string after the removal of characters : ");
    puts(str);
    return 0;
}