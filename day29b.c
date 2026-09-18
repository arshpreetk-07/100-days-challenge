//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>
int main(){
    int i,n ,j,max;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(j=1;j<n;j++){
        if(a[j]>max){
            max=a[j];
        }
    }
    printf("the largest element of array: %d\n",max);
    int min=a[0];
    for(j=1;j<n;j++){
        if(a[j]<min){
            min=a[j];
        }
    }   
    printf("the smallest element of array: %d\n",min);
    


    


}