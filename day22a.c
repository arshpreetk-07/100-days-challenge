//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int main(){


    int ornum,temp,sum=0,r,i,fact=1;

    printf("enter the number: ");

    scanf("%d",&ornum);
    temp=ornum;

    while(ornum!=0){

        r=ornum%10;
        ornum=ornum/10;
        fact=1;
        

        for(i=1;i<=r;i++){
            
            fact=fact*i;

        }
        sum=sum+fact;
    }
    if(sum==temp){
        printf("strong number");
    }
    else{
        printf("not a strong number");
    }



}