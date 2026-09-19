//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
#define SIZE 100
int main(){
    int a[SIZE], i,n,num,p,q;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter the index u want to insert num in:");
    scanf("%d",&p);
    q=p;
    if(p<0||p>n){
        printf("INVALID INDEX");
    }
    else{
        for(i=n;i>p;i--){
        a[i]=a[i-1];
        
        
    }
    printf("enter the num u insert:");
    scanf("%d",&a[p]);
    for(i=0;i<n+1;i++){
        printf("%d\n",a[i]);
    }


    }


    
    

}

