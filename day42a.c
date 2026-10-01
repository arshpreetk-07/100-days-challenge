//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
#include<string.h>
int main(){
    int vow=0,cons=0,i=0;
    char str[100];
    printf("enter abstring: ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
        if(str[i]>'a' && str[i]<'z' || str[i]>'A' && str[i]<'Z' ){
            if(str[i]=='a' || str[i]=='A' || str[i]=='e'|| str[i]=='E' || str[i]=='i' ||str[i]=='I' ||str[i]=='O' ||str[i]=='o' ||str[i]=='u' ||str[i]=='U' ){
                vow++;
            }
            else{
                cons++;
            }
        }
        i++;
    }
    printf("NUMBER OF VOWELS : %d\n",vow);
    printf("NUMBER OF CONSONANTS: %d",cons);




}