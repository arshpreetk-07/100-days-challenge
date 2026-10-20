//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include<stdio.h>
int main(){
    int k,n,i,j,max;
    
    printf("enter the number of elements in array");
    scanf("%d",&n);
    int a[n];
    printf("enter the integer");
    scanf("%d",&k);

    printf("enter the elemsents in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<=n-k;i++){
        max=a[i];
        for(j=i+1;j<i+k;j++){
            if(a[j]>max){
                max=a[j];

            }

        }
        printf("%d ",max);
    }
}