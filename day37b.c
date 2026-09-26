//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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
    printf("TRANSPOSE: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[j][i]);
        }
        printf("\n");
    }

}