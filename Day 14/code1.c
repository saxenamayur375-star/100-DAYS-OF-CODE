//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main(){
    int n,sum=0;
    printf("ENTER the number you want the sum of the first odd numbers: ");
    scanf("%d",&n);
    for(int i=1; i<=2*n; i=i+2){
        sum=sum+i;
    }
    printf("The sum of the first %d odd numbers are: %d",n,sum);
    return 0;
}