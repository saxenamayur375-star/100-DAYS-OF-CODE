//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main(){
    int n,digit,sum=0;
    printf("ENTER the number: ");
    scanf("%d",&n);
    for(int i=n; i!=0; i=i/10){
        digit=i%10;
        int factorial=1;
        if(digit==0){
            factorial=1;
        }
        else{
        for(int j=digit; j>0; j--){
            factorial=factorial*j;
        }
    }
        sum=sum+factorial;
    }
    if (sum==n){
        printf("The number %d is strong number\n",n);
    }
    else{
    printf("The number %d is not strong number\n",n);   
    }
    return 0;
}