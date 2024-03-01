#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],key;
    int i;
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    printf("Enter the character to be searched: ");
    scanf("%c", &key);
    int count = 0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==key)
        {
            printf("The character %c occurs at the index %d\n", key, i+1);
            count=1;
        }
    }
    if(count==0)
    {
        printf("The character %c does not occur in the string", key);
    }
    return 0;
}