//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
#include<math.h>
int main(){
    int p,n;
    float r,si,ci,amt;
    printf("enter the principal amount: ");
    scanf("%d",&p);
    printf("enter rate of interest: ");
    scanf("%f",&r);
    printf("enter the time period: ");
    scanf("%d",&n);
    si=(p*n*r)/100;
    amt=p*pow((1+r/100), n);
    ci=amt-p;
    printf("the simple interest is %f\n:",si);
    printf("the compound interest is %f\n:",ci);
}

    
