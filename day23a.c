//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number: ");

    scanf("%d",&n);

    float numerator,denominator=3,sum=0;
    for(i=1;i<=n;i++){

        numerator=i*2;

        sum=sum+numerator/denominator;
    
            denominator=denominator+4;
        

    }
    printf("approximate sum: %f",sum);
}
