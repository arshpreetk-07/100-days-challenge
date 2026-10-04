//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include<stdio.h>
#include<string.h>
int main(){
    int i=0 ;
    char str[100];
    printf("enter abstring: ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
        if(str[i]==' '){
            str[i]='-';
        }
        i++;
    }
    printf("%s",str);
        
    
}