#include<stdio.h>
 int main(){
    int age ;
    printf("enter your age :");
    scanf("%d",&age);
    if (age>18){
        printf("adult\n");
    }
    else if(age>=13 &&age<=18){
        printf("tenager\n");
    }
    else if(age<13){
        printf("minor\n");
    }
    printf("thank for visiting");
    return 0;
 }