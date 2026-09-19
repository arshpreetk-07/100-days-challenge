//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5


*/
#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], i,n,num,p;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the index u want to delete num in:");
    scanf("%d",&p);
    for(i=p+1;i<n;i++){
        a[p]=a[p+1];
        p++;

    }
    for(i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
}



