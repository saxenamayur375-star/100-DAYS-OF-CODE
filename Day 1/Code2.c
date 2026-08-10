//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main(){
    float a,b;
    printf("ENTER the first number: \n");
    scanf("%f",&a);
    printf("ENTER the second number: \n");
    scanf("%f",&b);
    printf("SUM of two numbers %.2f and %.2f is: %.2f\n",a,b,a+b);
    printf("DIFFRENCE of two numbers %.2f and %.2f is: %.2f\n",a,b,a-b);
    printf("PRODUCT of two numbers %.2f and %.2f is: %.2f\n",a,b,a*b);
    printf("QUOTIENT of two numbers %.2f divided by %.2f is: %.2f\n",a,b,a/b);
    return 0;
}