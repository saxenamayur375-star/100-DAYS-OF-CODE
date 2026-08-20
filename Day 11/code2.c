//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main(){
    int cp,sp,gain,loss;
    printf("ENTER THE COST PRICE: ");
    scanf("%d",&cp);
    printf("ENTER THE SELLING PRICE: ");
    scanf("%d",&sp);
    if(cp<sp){
        gain=sp-cp;
        printf("PROFIT PERCENTAGE IS: %d%\n",(gain*100)/cp);
    }
    else if (cp>sp){
        loss=cp-sp;
        printf("LOSS PERCENTAGE IS: %d%\n",(loss*100)/cp);
    }
    else {
        printf("NO PROFIT NO LOSS");
    }
    return 0;
}