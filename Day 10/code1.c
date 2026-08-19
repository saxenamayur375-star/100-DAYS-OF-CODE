//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main(){
    int a,b,c;
    printf("ENTER THE SIDE OF TRIANGLE: ");
    scanf("%d",&a);
    printf("ENTER THE SIDE OF TRIANGLE: ");
    scanf("%d",&b);
    printf("ENTER THE SIDE OF TRIANGLE: ");
    scanf("%d",&c);
    if(a==b && b==c && a==c){
        printf("THE TRIANGLE IS EQUILATERAL TRAINGLE\n");
    }
    else if (a==b || b==c || a==c){
        printf("THE TRIANGLE IS ISOSCELES TRIANGLE\n");
    }
    else{
        printf("THE TRAINGLE IS SCALENE TRAINGLE\n");
    }
    return 0;
}