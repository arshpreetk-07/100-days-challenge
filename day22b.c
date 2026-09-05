//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4


*/
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number: ");

    scanf("%d",&n);
    float numerator,denominator,sum=1;
    for(i=2;i<=n;i++){

        numerator=(i*2)-1;
        denominator=i*2;

        sum=sum+numerator/denominator;

    }
    printf("approximate sum: %f",sum);

}

