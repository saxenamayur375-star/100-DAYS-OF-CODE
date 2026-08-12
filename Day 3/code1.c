//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main(){
    int c;
    printf("enter the temp in celsius ");
    scanf("%d",&c);
    printf("tempertaure in farehnhite %d \n",((c*9)/5)+32);
    return 0;
}