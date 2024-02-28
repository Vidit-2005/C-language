// Write a C program to concatenate two strings without using the strcat() function.

#include <stdio.h>
#include <string.h>

int main() {
    char arr1[50], arr2[50], arr3[100];
    printf("Enter the first string: ");
    fgets(arr1, sizeof(arr1), stdin);

    printf("Enter the second string: ");
    fgets(arr2, sizeof(arr2), stdin);

    int i, j;
    for (i = 0; arr1[i] != '\0'; i++) {
        arr3[i] = arr1[i];
    }

    for (j = 0; arr2[j] != '\0'; j++) {
        arr3[i] = arr2[j];
        i++;
    }

    arr3[i] = '\0';
    printf("Concatenated string: %s\n", arr3);

    return 0;
}
