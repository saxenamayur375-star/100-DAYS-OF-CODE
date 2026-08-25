//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int num, originalNum, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    // Check if palindrome
    if (originalNum == reverse) {
        printf("%d is a Palindrome number.", originalNum);
    } else {
        printf("%d is not a Palindrome number.", originalNum);
    }

    return 0;
}