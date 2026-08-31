//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include<stdio.h>
int main(){

    int num,prd=1,dig,rnum=num ;


    printf("enter the number: ");
    scanf("%d",&num);

    while(num!=0){

        dig=num%10;
        num=num/10;
        if(dig%2==0){
            continue;
        }
        else{
            prd=prd*dig;

        }

        


    }
    printf("product of odd digits of %d = %d",rnum,prd);
}