//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
#include<math.h>
int main(){
    int onum ,num , sum =0 ,dig,count , orignum;
    onum=num;

    printf("enter the nnumber: ");
    scanf("%d",&num);
    

    while(num!=0){
        count++;
        num=num/10;

    }
    while(num!=0){

        dig=  onum%10;
        onum = onum/10;
        sum = sum + pow(dig,count);


    }
    if(sum==num){
        printf("Armstrong");
    }
    else{
        printf("not armstrong");
    }
}
