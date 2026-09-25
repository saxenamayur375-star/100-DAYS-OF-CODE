//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0;
    int maxLength = 0, length = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            length++;
        }
        else {
            if (length > maxLength) {
                maxLength = length;
                start = i - length;

                for (j = 0; j < length; j++) {
                    longest[j] = str[start + j];
                }

                longest[j] = '\0';
            }

            length = 0;
        }

        i++;
    }
    if (length > maxLength) {
        start = i - length;

        for (j = 0; j < length; j++) {
            longest[j] = str[start + j];
        }

        longest[j] = '\0';
    }

    printf("%s", longest);

    return 0;
}