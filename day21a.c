//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include<stdio.h>
int main(){
    int num,count=1,l,f,m,num1,temp;

    printf("enter a number: ");
    scanf("%d",&num);
    temp = num;
    l=temp%10;

    while(num>=10){

        num=num/10;
        count=count*10;
        
    }

    f=num;
    m=(temp%count)/10;
    num1 = l*count+m*10+f;
    printf("%d",num1);

}