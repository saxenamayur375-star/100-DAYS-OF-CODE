/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {

    for (int i = 1; i <= 13; i++) {

        printf("*\n");

        if (i == 1 || i == 4 || i == 9 || i == 12) {
            printf("\n");
        }
    }

    return 0;
}