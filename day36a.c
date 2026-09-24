//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter number of rows in matrix:");
    scanf("%d",&r);

    printf("enter number of columns in matrix:");
    scanf("%d",&c);
    int a[r][c],sumr=0,sumc=0;
    printf("enter numbers in matrix:\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}