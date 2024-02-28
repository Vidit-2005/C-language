// Write a C program to count the occurrences of a particular character in a given string.

#include<stdio.h>

int main() {
    char arr1[50]; 
    printf("Enter a string: ");
    fgets(arr1,50, stdin);
    char c;
    printf("Enter a character to count: ");
    scanf(" %c", &c);
    int count = 0;
    for (int i = 0; arr1[i] != '\0'; i++) {
        if (arr1[i] == c) {
            count++;
        }
    }
    printf("The count of '%c' in the string is: %d\n", c, count);
    return 0;
}
