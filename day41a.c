//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
    char str[100];
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);

    while(str[i]!= '\0'){
        i++;
    }
    printf("numbers of characters: %d",i);

}
