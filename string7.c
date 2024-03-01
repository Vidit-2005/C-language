#include<stdio.h>
#include<string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
int main() 
{
    char str1[20], str2[20];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    reverseString(str1);
    reverseString(str2);

    printf("Reversed first string: %s\n", str1);
    printf("Reversed second string: %s\n", str2);
    return 0;
}
