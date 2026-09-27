//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int r, c, i, j, flag = 1;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // A symmetric matrix must be square
    if(r != c) {
        printf("False");
        return 0;
    }

    // Check symmetry
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {

            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }

        if(flag == 0) {
            break;
        }
    }

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}