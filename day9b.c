/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
int main(){
    int marks;

    printf("enter yout marks: ");
    scanf("%d",&marks);

    if(100>= marks <= 90){
        printf ("grade A");
    }
    else if(90> marks <= 80){
        printf (" grade B");
    }
    if(80> marks <= 70){
        printf (" grade C");
    }
    if( 60 <= marks < 70){
        printf ("grade D");
    }   
    if(marks<60 ){
        printf ("grade F");
    }
    else{
        printf("invalid marks");
    }    

}