//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main(){
    int a,b,c;
    printf("ENTER THE FIRST NUMBER ");
    scanf("%d",&a);
    printf("ENTER THE FIRST NUMBER ");
    scanf("%d",&b);
    printf("ENTER THE FIRST NUMBER ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("THE GREATEST NUMBER AMONG THREE NUMBER %d, %d, %d IS %d",a,b,c,a);
    }
    else if(b>a && b>c){
        printf("THE GREATEST NUMBER AMONG THREE NUMBER %d, %d, %d IS %d",a,b,c,b);
    }
    else{
        printf("THE GREATEST NUMBER AMONG THREE NUMBER %d, %d, %d IS %d",a,b,c,c);
    }
    return 0;
}