//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include<stdio.h>
int main(){
    int low,mid,high,n;
    printf("enter the number of elements you want in array");
    scanf("%d",&n);
    int a[n],key,i;
    printf("enter elements of array \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    printf("enter the number you want to search");
    scanf("%d",&key);
    low=0;
    high=n;
    
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
        printf("element found at index:%d",mid);
        return 0;
    }
    else if(a[mid]<key){
        low=mid+1;
    }
    else if(a[mid]>key){
        high=mid-1;
        
        }
    
    }
    printf("ELEMENT NOT FOUND");
}
    