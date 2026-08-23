//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
#define PI 3.14

int main(){

    float rad,circumference,area;

    printf("Enter the radius: ");
    scanf("%f",&rad);

    area = PI*rad*rad;
    circumference = 2*PI*rad;
    
    printf("Circmference of circle : %f\n",circumference);
    printf("Area of circle: %f\n ",area);


}