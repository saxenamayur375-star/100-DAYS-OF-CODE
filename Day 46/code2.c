//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[100];
    int found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j] && str[i] >= 'a' && str[i] <= 'z') {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }

        if (found == 1) {
            break;
        }
    }

    if (found == 0) {
        printf("No repeating lowercase alphabet");
    }

    return 0;
}