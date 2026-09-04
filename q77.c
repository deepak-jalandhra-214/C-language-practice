#include<stdio.h>
int main(){
    char day;
    printf("enter the first letter of the day:");
    scanf("%c",&day);
    switch(day){
        case 's':
            printf("sunday");
            break;
        case 'm':
            printf("monday");
            break;
        case 't':
            printf("tuesday");
            break;
        case 'w':
            printf("wednesday");
            break;
        case 'h':
            printf("thursday");
            break;
        case 'f':
            printf("friday");
            break;
        case 'a':
            printf("saturday");
            break;
        default:
            printf("invalid input");
    }
    return 0;
}