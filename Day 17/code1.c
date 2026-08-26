//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main(){
    int n,digit,sum=0;
    printf("ENTER the number: ");
    scanf("%d",&n);
    for(int i=n; i!=0; i=i/10){
        digit=i%10;
        sum=sum+(digit*digit*digit);
    }
    if(sum==n){
        printf("The number is Armstrong number");
    }
    else{
        printf("The number is not Armstrong number");
    }
    return 0;
}