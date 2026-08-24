//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

int main(){
    int n,factorial=1;
    printf("ENTER the number you factorial of: ");
    scanf("%d",&n);
    for (int i=n; i>0 ; i--){
        factorial*=i;
    }
    printf("THE FACTORIAL OF NUMBER %d is: %d",n,factorial);
    return 0;
}