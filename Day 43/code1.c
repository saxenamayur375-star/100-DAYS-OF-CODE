//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}