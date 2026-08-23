#include<stdio.h>

int main(){
    int number;
    printf("enter the no.:");
    scanf("%d",&number);
    if (number>0){
        printf("no. is positive\n");
        if (number%2==0){
            printf("no. is even\n");
        }
        else {
            printf("no. is odd\n");
        }
    }
    else{
        printf("negative\n");
    }
    return 0;
}