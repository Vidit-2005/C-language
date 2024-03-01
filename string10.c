// c rpogram to insert thr string from the usseer and conert all the uper case in the lower case

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
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("String in lower case:");
    puts(str);
    return 0;
}