//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include<stdio.h>
int main(){
    int num,comp=0,dig,place=1;

    printf("enter the binary number: ");
    scanf("%d",&num);
   while(num>0){
    dig=num%10;
    if(dig==0){
        dig=1;
    }
    else{
        dig=0;
    }
    comp=comp+(dig*place);
    place=place*10;
    num=num/10;
   }
   printf("1'scomplement= %d",comp);

}
