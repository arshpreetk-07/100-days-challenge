//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline added by fgets
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; ; i++)
    {
        // End of a word
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            // Reverse the current word
            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            // Next word starts after the space
            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    printf("%s", str);

    return 0;
}