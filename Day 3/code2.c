// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("The value of first number after swaping is: %d\n", a);
    printf("The value of second number after swaping is: %d\n", b);
    return 0;
}