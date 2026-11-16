#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum choices
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum choices c;
    int i, a, b;
    char ch[20];

    printf("Enter your choice: ");
    scanf("%s", ch);

    // Convert input to uppercase
    for(i = 0; ch[i] != '\0'; i++)
    {
        ch[i] = toupper(ch[i]);
    }

    if(strcmp("ADD", ch) == 0)
    {
        c = ADD;
    }
    else if(strcmp("SUBTRACT", ch) == 0)
    {
        c = SUBTRACT;
    }
    else if(strcmp("MULTIPLY", ch) == 0)
    {
        c = MULTIPLY;
    }
    else
    {
        printf("Invalid choice");
        return 0;
    }

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(c)
    {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}