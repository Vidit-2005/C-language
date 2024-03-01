//5
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100 ,stdin); 
    int len = strlen(str);
    int f=0;
    for(int l=0,r=len-2;l<r;l++,r--)
    {
        if(str[l]==str[r])
        {f=1;
        printf("%d",f);}
    }
    if(f==1)
    {
        printf("string is palendron");
    }
    else
    printf("String is not palendrom");
    return 0;
}