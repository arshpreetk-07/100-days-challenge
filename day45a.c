//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
#include<string.h>
int main(){
    int i=0 , count =0;
    char str[100],c;
    printf("enter abstring: ");
    fgets(str,sizeof(str),stdin);
    printf("enter the character");
    scanf("%c",&c);
    while(str[i]!='\0'){
        if(str[i]==c){
            count++;
        
        }
        i++;
    }
    printf("%d",count);
        
    
}