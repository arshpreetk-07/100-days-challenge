//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int r, c, i, j, sum;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // sum represents i + j for each diagonal
    for(sum = 0; sum <= r + c - 2; sum++) {

        if(sum % 2 == 0) {
            // even diagonal: bottom to top
            for(i = r - 1; i >= 0; i--) {
                j = sum - i;

                if(j >= 0 && j < c) {
                    printf("%d ", a[i][j]);
                }
            }
        }
        else {
            // odd diagonal: top to bottom
            for(i = 0; i < r; i++) {
                j = sum - i;

                if(j >= 0 && j < c) {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    return 0;
}
