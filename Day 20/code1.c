//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main(){
    int n,digit,product=1;
    printf("ENTER the number: ");
    scanf("%d",&n);
    for(int i=n; i!=0; i=i/10){
        digit= i%10;
        if((digit%2)!=0){
            product=product*digit;
        }
    }
    printf("The product of odd digit is: %d",product);
    return 0;
}