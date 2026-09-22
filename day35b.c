//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
int main(){
    int i,j,k,n,last;
    printf("enter the number of elements you want in array:");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS OF ARRAY:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the no of position ny which you want to rotate array:");
    scanf("%d",&k);
    for(i=0;i<=k;i++){
        last=a[n-1];
        for(j=n-1;j>0;j--){
            a[i]=a[i-1];
        }
        a[0]=last;
    }
    printf("rotated array:\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }

}