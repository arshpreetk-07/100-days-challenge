//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include<stdio.h>
int main(){
    int n,sl,l,i;
    printf("enter the number of elements you want in array");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS OF ARRAY:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    if(a[0]<a[1]){
        l=a[1];
        sl=a[0];
    }
    else{
        l=a[0];
        sl=a[1];
    }
    for(i=2;i<n;i++){
        if (a[i]>l){
            sl=l;
            l=a[i];
           }
        else if(a[i]>sl && a[i]!=l){
            sl=a[i];
        }
        
    }
    printf("second largest element : %d",sl);
}