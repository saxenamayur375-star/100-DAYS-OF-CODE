//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    int n, reverse = 0, digit, count = 0;

    printf("ENTER the binary digit: ");
    scanf("%d", &n);

    int temp = n;

    while (temp != 0) {
        digit = temp % 10;

        if (digit != 0 && digit != 1) {
            printf("Invalid binary number");
            return 0;
        }

        reverse = reverse * 10 + digit;
        temp = temp / 10;
        count++;
    }

    printf("1's complement is: ");

    for (int i = 0; i < count; i++) {

        if (reverse != 0) {
            digit = reverse % 10;
            reverse = reverse / 10;
        } else {
            digit = 0;
        }

        if (digit == 0)
            printf("1");
        else
            printf("0");
    }

    return 0;
}