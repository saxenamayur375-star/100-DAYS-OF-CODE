//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include <stdio.h>

int main(){
    int month;
    printf("ENTER the month number: ");
    scanf("%d",&month);
    switch(month){
    case 1:
     printf("THE MONTH IS JANUARY \n CONSIST OF 31 DAYS\n");
     break;
     case 2: 
     printf("THE MONTH IS FEBRUARY\n CONSIST OF 28 DAYS IN NON LEAP YEAR AND 29 DAYS IN LEAP YEAR");
     break;
     case 3: 
     printf("THE MONTH IS MARCH \n CONSIST OF 31 DAYS");
     break;
     case 4: 
     printf("THE MONTH IS APRIL \n CONSIST OF 30 DAYS");
     break;
     case 5: 
     printf("THE MONTH IS MAY \n CONSIST OF 31 DAYS");
     break;
     case 6: 
     printf("THE MONTH IS JUNE \n CONSIST OF 30 DAYS");
     break;
     case 7: 
     printf("THE MONTH IS JULY \n CONSIST OF 31 DAYS");
     break;
     case 8: 
     printf("THE MONTH IS AUGUST \n CONSIST OF 31 DAYS");
     break;
     case 9: 
     printf("THE MONTH IS SEPTEMBER \n CONSIST OF 30 DAYS");
     break;
     case 10: 
     printf("THE MONTH IS OCTOBER \n CONSIST OF 31 DAYS");
     break;
     case 11: 
     printf("THE MONTH IS NOVEMBER \n CONSIST OF 30 DAYS");
     break;
     default: 
     printf("THE MONTH IS DECEMBER \n CONSIST OF 31 DAYS");
     break;
    }
    return 0;
}