#include<stdio.h>
#include<string.h>
int main()
{
    void con(char[],char[],char[],int,int);
    char str1[20],str2[20],str3[40];
    int i,j,len1,len2,count=0;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    con(str1,str2,str3,len1,len2);
    puts(str3);
    return 0;

}
void con(char str1[],char str2[],char str3[],int len1,int len2)
{
    int i,j;
    for(i=0;i<len1;i++)
    {
        str3[i]=str1[i];
    }
    str3[i]=' ';
    i++;
    for(j=0;j<len2;j++)
    {
        str3[i]=str2[j];
        i++;
    }
    str3[i]='\0';
}