//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

// Q137: Create an enum for user roles (ADMIN, USER, GUEST)
// and display messages based on role.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role role;
    char ch[20];
    int i;

    scanf("%s", ch);

    // Convert input to uppercase
    for(i = 0; ch[i] != '\0'; i++)
    {
        ch[i] = toupper(ch[i]);
    }

    if(strcmp(ch, "ADMIN") == 0)
    {
        role = ADMIN;
    }
    else if(strcmp(ch, "USER") == 0)
    {
        role = USER;
    }
    else if(strcmp(ch, "GUEST") == 0)
    {
        role = GUEST;
    }
    else
    {
        printf("Invalid Role!");
        return 0;
    }

    switch(role)
    {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}