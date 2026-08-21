//Q23: Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main(){
    int days,fine;
    printf("Enter the number of days you are late in reurning the book: ");
    scanf("%d",&days);
    if (days>=1 && days<=5){
        fine=2*days;
        printf("THE FINE ON %d DAYS LATE IS: %d",days,fine);
    }
    else if (days>=6 && days<=10){
        fine=(2*5)+(4*(days-5));
        printf("THE FINE ON %d DAYS LATE IS: %d",days,fine);
    }
    else if (days>=11 && days<=20){
        fine=(2*5)+(4*5)+(6*(days-10));
        printf("THE FINE ON %d DAYS LATE IS: %d",days,fine);
    }
    else{
        printf("THE FINE ON %d DAYS LATE IS YOUR MEMBERSHIP CANCELLED",days);
    }
    return 0;
}