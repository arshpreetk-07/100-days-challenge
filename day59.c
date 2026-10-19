//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include<stdio.h>
int main(){
    int i,j,n,k,msum=0;
    printf("enter the number of elements you want in array :");
    scanf("%d",&n);
    int a[n];
    
    printf("enter the elpements in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter an integer :");
    scanf("%d",&k);


    for(i=0;i<=n-k;i++){
        int sum=0;
        for(j=i;j<i+k;j++){
            sum=sum+a[j];
        }
        if(sum>msum){
            msum=sum;
        }
    }
    printf("maximum sum: %d",msum);
}
