//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/


#include<stdio.h>
int main(){
    int m,n,i,temp;

    printf("enter the n: ");
    scanf("%d",&n);

    printf("enter the m: ");
    scanf("%d",&m);

    int a[n],b[m],c[100];
    printf("enter elements in array 1:")

    for(i=0;i<n;i++){

        scanf("%d",&a[i]);

    }
    printf("enter elements in array2:");
    for(i=0;i<m;i++){

        scanf("%d",&b[i]);

    }

    for(i=0;i<n;i++){
        c[i]=a[i];

    }
    for(i=0;i<m;i++){
        c[i+m]=b[i];
    }
    for(i=0;i<m+n-1;i++){
        for(j=0;j<m+n-1-i;j++){
            if(c[j]>c[j+1]){
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;

            }
        }
    }
    for(i = 0; i < m + n; i++) {
        printf("%d ", c[i]);
    }




}