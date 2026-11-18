//Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
// Q139: Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status s = SUCCESS;
    enum Status f = FAILURE;
    enum Status t = TIMEOUT;

    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d", s, f, t);

    return 0;
}
