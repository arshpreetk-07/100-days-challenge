//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n, m, i, k = 0;

    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);
    int b[m];

    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int c[n + m];

    // Copy first array
    for (i = 0; i < n; i++) {
        c[k] = a[i];
        k++;
    }

    // Copy second array
    for (i = 0; i < m; i++) {
        c[k] = b[i];
        k++;
    }

    // Print merged array
    for (i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}