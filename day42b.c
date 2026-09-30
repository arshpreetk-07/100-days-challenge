//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
    char str[100];
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    printf("STRING IN UPPERCASE :");

    while(str[i]!= '\0'){
        if(str[i]>'a' && str[i]<'z'){
             str[i]=str[i]-32;

        }
        printf("%c",str[i]);
        i++;
    }
    
}
