//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>
int main(){
    int a , c ,b;

    printf("enter 3 no: ");
    scanf(" %d %d %d", &a, &b,&c);
    
    if( a > b && a>c ){
        printf("%d the greatest number is: ", a);
    
    }
    else if(b>a && b>c){
        printf("%d the greatest no is :" ,b);

    }
    else{
        printf("%d the greatest no is:  ",c);
    }

}