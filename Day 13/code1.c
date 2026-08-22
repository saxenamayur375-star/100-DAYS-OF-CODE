//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main(){
    int a,b;
    char o;
    printf("ENTER two numbers and operator you want to operate: ");
    scanf("%d %c%d",&a,&o,&b); //space before %c is required to avoid buffer
     switch(o){
        case '+':
        printf("RESULT= %d",a+b);
        break;
        case '-':
        printf("RESULT= %d",a-b);
        break;
        case '*':
        printf("RESULT= %d",a*b);
        break;
        case '/':
        printf("RESULT= %d",a/b);
        break;
        case '%':
        printf("RESULT= %d",a%b);
        break;
    }
    return 0;
}