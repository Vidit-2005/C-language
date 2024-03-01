#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("ENter the string ");
    fgets(str,20,stdin);
    int r=0 ;
    for (int i=0;str[i]!='\0';i++)
    r=r+1;
    printf("%d is the length of the string\n",r-1);
    puts(str);
    return 0;
}

