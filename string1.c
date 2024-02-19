//1
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     printf("ENter the string ");
//     fgets(str,20,stdin);
//     puts(str);
//     return 0;
// }

//2
//using function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     printf("ENter the string ");
//     fgets(str,20,stdin);
//     int r=strlen(str);
//     printf("%d is the length of the string\n",r-1);
//     return 0;
// }

//without function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     printf("ENter the string ");
//     fgets(str,20,stdin);
//     int r=0 ;
//     for (int i=0;str[i]!='\0';i++)
//     r=r+1;
//     printf("%d is the length of the string\n",r-1);
//     return 0;
// }

//3
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     printf("ENter the string ");
//     fgets(str,20,stdin);
//     int r=0 ;
//     for (int i=0;str[i]!='\0';i++)
//     r=r+1;
//     printf("%d is the length of the string\n",r-1);
//     puts(str);
//     return 0;
// }

//4
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100 ,stdin); 
//     int len = strlen(str);
//     for(int i = 0; i < len / 2; i++) {
//         char temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }
//     printf("Reversed string: %s\n", str);
//     return 0;
// }

//5
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100 ,stdin); 
//     int len = strlen(str);
//     int f=0;
//     for(int l=0,r=len-2;l<r;l++,r--)
//     {
//         if(str[l]==str[r])
//         {f=1;
//         printf("%d",f);}
//     }
//     if(f==1)
//     {
//         printf("string is palendron");
//     }
//     else
//     printf("String is not palendrom");
//     return 0;
// }