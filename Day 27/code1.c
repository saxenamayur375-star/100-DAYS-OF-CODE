/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main(){
    for(int i=1; i<=5; i++){
        printf("*");
        for(int j=2; j<=i;j++ ){
            printf("**");
        }
        printf("\n");
    }
    for(int i=4; i>=1; i--){
        printf("*");
        for(int j=2; j<=i;j++ ){
            printf("**");
        }
        printf("\n");
    }
    return 0;
}