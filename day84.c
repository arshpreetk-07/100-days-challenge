//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/ 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    char input[20];
    int i;
    enum Status status;

    printf("Enter status: ");
    scanf("%s", input);

    // Convert input to uppercase
    for(i = 0; input[i] != '\0'; i++)
    {
        input[i] = toupper(input[i]);
    }

    // Convert string to enum value
    if(strcmp(input, "SUCCESS") == 0)
    {
        status = SUCCESS;
    }
    else if(strcmp(input, "FAILURE") == 0)
    {
        status = FAILURE;
    }
    else if(strcmp(input, "TIMEOUT") == 0)
    {
        status = TIMEOUT;
    }
    else
    {
        printf("Invalid status");
        return 0;
    }

    // Print message according to enum value
    if(status == SUCCESS)
    {
        printf("Operation successful");
    }
    else if(status == FAILURE)
    {
        printf("Operation failed");
    }
    else if(status == TIMEOUT)
    {
        printf("Operation timed out");
    }

    return 0;
}