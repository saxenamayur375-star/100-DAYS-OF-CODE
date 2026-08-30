//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits = 0;
    int temp, power, middle, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    last = n % 10;
    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    first = temp;
    digits++;   // Total number of digits
    power = pow(10, digits - 1);
    middle = (n % power) / 10;
    result = last * power + middle * 10 + first;
    printf("Number after swapping = %d", result);
    return 0;
}