Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>
#include<string.h>
int main(){
    int spaces=0,digits=0,special=0;
    char str[100];
    printf("enter abstring: ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
        if(str[i]>'a' && str[i]<'z' || str[i]>'A' && str[i]<'Z' ){
            continue;
        }
        else if(str[i]>'0' && str[i]<'9'){
            digits++;

        }
        elseif(str[i]==' '){
            spaces++;
        }
        else{
            special++;
        }
        
        
        i++;
    }
    printf("spaces : %d\n",spaces);
    printf(" digits : %d\n",digits);
    printf(" special : %d\n",special);





}