//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include <stdio.h>

int main(){
    int digit;
    printf("ENTER THE DIGIT (1-7): ");
    scanf("%d",&digit);
    switch (digit)
    {
    case 1: 
      //  if(digit=1)
        printf("THE DAY IS MONDAY");
        break;
    case 2:
    //if(digit=2)
    printf("THE DAY IS TUESDAY");
    break;
    case 3:
    //if(digit=3)
    printf("THE DAY IS WEDNESDAY");
    break;
    case 4:
    //if(digit=4)
    printf("THE DAY IS THURSDAY");
    break;
    case 5:
    //if(digit=5)
    printf("THE DAY IS FRIDAY");
    break;
    case 6:
    //if(digit=6)
    printf("THE DAY IS SATURDAY");
    break;
    default:
    printf("THE DAY IS SUNDAY");
        break;
    }
    return 0;
}