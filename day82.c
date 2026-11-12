//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

enum trafficL{
    red,
    yellow,
    green,
};

int main(){

        char light[20];
        int i;
        enum trafficL color;
        printf("enter the color of light");
        scanf("%s",light);

        for(i=0;light[i]!='\0';i++){
            light[i]=tolower(light[i]);

        }

        if(strcmp(light,"red")==0){
            color=red;
        }

        else if(strcmp(light,"yellow")==0){
            color=yellow;
        }

        else if(strcmp(light,"green")==0){
            color=green;
        }

        else{
            printf("invalid color");
            return 0;
        }

        if(color== red){
            printf("STOP!");
        }
        else if(color== yellow){
            printf("WAIT");
        }
        else if(color==green){
            printf("GO!");
        }

        return 0;

}






