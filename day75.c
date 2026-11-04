//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

// UPES
// Q125: Append text to an existing file

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    getchar();  // removes newline left by scanf

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}