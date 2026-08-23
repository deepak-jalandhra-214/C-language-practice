#include<stdio.h>

int main(){
    int age;
    printf("enter the age :");
    scanf("%d",&age);
    if (age>18){
        printf("adult\n");
    }
    else {
        printf("minor\n");
    }
    printf("thank you");
    return 0;
}