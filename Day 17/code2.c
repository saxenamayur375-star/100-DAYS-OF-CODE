//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main(){
    int n, not_prime;
    printf("ENTER the number: ");
    scanf("%d",&n);
    if (n==0 || n==1){
        not_prime=1;
    }
    else{
    for(int i=2; i<n; i++){
        if(n%i==0 && n!=2){
            not_prime=1;
            break;
        }
    }}
    if(not_prime){
        printf("THE NUMBER %d IS NOT PRIME NUMBER\n",n);
    }
    else{
        printf("THE NUMBER %d IS PRIME NUMBER\n",n);
    }
    return 0;
}