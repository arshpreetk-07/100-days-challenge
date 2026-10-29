Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include<stdio.h>
int main(){
    int n,num;

    printf("enter the numner of elements you want in array: ");
    scanf("%d",&n);

    int a[n];

    printf("enter the elements in array such that only one number repeats itself");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n; i++) {
        if(freq[a[i]] == 1) {
            printf("%d", a[i]);
            break;
        }

        freq[a[i]]++;
    }

    return 0;


}