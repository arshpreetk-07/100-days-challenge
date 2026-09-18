//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include<stdio.h>
int main(){
    int a[5],i,j,sum=0;
    printf("enter elements of array:\n");
    for(i=0;i<5;i++){
        
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++){
        sum = sum+a[j];
    }
    printf("sum of elements of array:%d",sum);
}