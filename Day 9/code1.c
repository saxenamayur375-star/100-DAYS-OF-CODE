//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float root;
    printf("GENERAL FORM OF QUDRATIC EQUATION:(ax^2 + bx + c = 0)\n");
    printf("Coefficient of x^2 is: \n");
    scanf("%d",&a);
    printf("Coefficient of x is: \n");
    scanf("%d",&b);
    printf("Coefficient of 1 is: \n");
    scanf("%d",&c);
    root= pow(b,2)-(4*a*c);
     if (root>0){
            printf("ROOTS OF QADRATIC EQUATION IS:\n ROOT 1:%.1f \n ROOT 2:%.1f\n",(-b+(pow(root,1/2)))/2*a,(-b-(pow(root,1/2)))/2*a);

        printf("ROOTS WILL BE REAL BUT DIFFER\n");
    }
    else if (root==0){
        printf("ROOTS OF QADRATIC EQUATION IS:\n ROOT 1:%.1f \n ROOT 2:%.1f\n",(-b + sqrt(root)) / (2*a),(-b - sqrt(root)) / (2*a));

        printf("ROOTS WILL BE REAL AND SAME\n");
    }
    else{
        printf("ROOTS WILL BE IMAGINARY (COMPLEX)\n");
    }
    return 0;
}