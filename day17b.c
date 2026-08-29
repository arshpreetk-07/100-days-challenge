//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>
int main(){
    int num , flag=1 ,i ;

    printf("enter the number");
    scanf("%d",&num);
    for(i=2; i*i<=num; i++){
        if(num%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Prime");
    else
        printf("Not prime");
    return 0;
}

