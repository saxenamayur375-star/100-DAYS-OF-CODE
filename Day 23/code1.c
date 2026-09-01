//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

int main(){
    int n;
    float sum=0;
    printf("ENTER the terms (n) you wanted to sum for the series 2/3 + 4/7 + 6/11 + 8/15....: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        sum=sum+((2.0*i)/((4.0*i)-1));
    }
    printf("The sum of %d terms are: %.2f",n,sum);
    return 0;
}