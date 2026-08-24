//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("enter the alphabet: ");
    scanf("%c",&ch);

    ch = tolower(ch);

    if(ch>='a' && ch<='z'){
        if(ch == 'a'|| ch == 'e' || ch == 'i' || ch=='o' || ch=='u')
        {
            printf("vowel");

        }
        else{
            printf("Consonant");
        
        }
    }   
    else{
         printf("Invalid input");
        }

    

    
}
