//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>

int main(){
    char alphabet;
    printf("ENTER the alphabet: ");
    scanf("%c",&alphabet);
    if (97<=alphabet && alphabet<=122){
        printf("THE CHARACTER %c IS IN LOWERCASE",alphabet);
    }
    else if (65<=alphabet && alphabet<=90){
        printf("THE CHARACTER %c IS IN UPPERCASE",alphabet);
    }
     else if (48<=alphabet && alphabet<=57){
        printf("THE CHARACTER %c IS IN DIGIT",alphabet);
    }
    else 
        printf("THE CHARACTER %c IS SPECIAL CHARACTER",alphabet);
    return 0;
}