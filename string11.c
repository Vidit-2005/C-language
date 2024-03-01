// c rpogram to insert thr string from the usseer and conert all the lower case in the upper case

#include<stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    printf("Original string: %s", str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("String in lower case:");
    puts(str);
    return 0;
}