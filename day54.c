//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>

int main() {
    int n, x;
    int leftSum = 0, rightSum = 0;
    int found = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {

        leftSum = 0;
        rightSum = 0;

        // Sum from 1 to x
        for (int i = 1; i <= x; i++) {
            leftSum += i;
        }

        // Sum from x to n
        for (int i = x; i <= n; i++) {
            rightSum += i;
        }

        if (leftSum == rightSum) {
            printf("%d", x);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("-1");
    }

    return 0;
}
