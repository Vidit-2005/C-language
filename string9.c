//c program to find frequency of each charracter 

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    printf("Original string: %s\n", str);
    int n= strlen(str);
    str[n-1]='\0';
    int count[200]={0};
    for(int i=0;i<n-1;i++)
    {
        count[str[i]]++;
        printf("%d\n",count[str[i]]);
    }
    for(int i=0;i<200;i++)
    {
        if(count[i]>0)
        {
            printf("%c occurs %d times\n",i,count[i]);
        }
    }
    return 0;

}