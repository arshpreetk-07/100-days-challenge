//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
    char str[100];
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
        printf("%c",str[i]);
        printf("\n");
        i++;
    }
}