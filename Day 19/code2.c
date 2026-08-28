//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main(){
    int n,digit,sum=0;
    printf("ENTER the number: ");
    scanf("%d",&n);
    for(int i=n; i!=0; i=i/10){
        digit=i%10;
        sum=sum+digit;
    }
    printf("THE sum of digits of number is: %d",sum);
    return 0;
}