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

int main() {
    float cp, sp, profit, loss, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        percentage = (profit * 100) / cp;
        printf("Profit %.2f%%", percentage);
    }
    else if (cp > sp) {
        loss = cp - sp;
        percentage = (loss * 100) / cp;
        printf("Loss %.2f%%", percentage);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}