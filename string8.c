// c code to reverese the string without changing the postion of word

#include <stdio.h>
#include <string.h>

void reverseWords(char *str)
 {
    int start = 0;
    int end = 0;
    int length = strlen(str);

    while (end < length) 
    {
        if (str[end] != ' ')
        {
            start = end;
            while (str[end] != ' ' && str[end] != '\0')
            {
                end++;
            }
            int wordLength = end - start;

            // Reverse the word
            for (int i = 0; i < wordLength / 2; i++) 
            {
                char temp = str[start + i];
                str[start + i] = str[end - i - 1];
                str[end - i - 1] = temp;
            }
        } 
        else 
        {
            end++;
        }
    }
}

int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    printf("Original string: %s\n", str);
    int n= strlen(str);
    str[n-1]='\0';
    reverseWords(str);

    puts(str);

    return 0;
}