//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
    int r, c, i, j, sum = 0;

    scanf("%d %d", &r, &c);

    int a[r][c];

    // Input matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal
    for(i = 0; i < r; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}