//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main(){
    char alphabet;
    printf("ENTER THE ALPHABET= ");
    scanf("%c",&alphabet);
    if(alphabet == 'a' || alphabet == 'A' || alphabet == 'e' || alphabet == 'E' || alphabet == 'i' || alphabet == 'I' || alphabet == 'o' || alphabet == 'O' || alphabet == 'u' || alphabet == 'U'){
        printf("THE ALPHABET %c IS VOWEL",alphabet);
    }
    else {
        printf("THE ALPHABET %c IS CONSONANT",alphabet);
    }
    return 0;
}
