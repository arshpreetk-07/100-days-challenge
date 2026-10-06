#include <stdio.h>

int main()
{
    char str[100];
    int freq[26] = {0};
    int i;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each lowercase alphabet
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 'a']++;
        }
    }

    // Find first character whose frequency is greater than 1
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' &&
           freq[str[i] - 'a'] > 1)
        {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}