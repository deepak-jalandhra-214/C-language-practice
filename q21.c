#include<stdio.h>

int main(){
    int marks;
    printf("enter the marks(1-100) :");
    scanf("%d",&marks);
    if (marks>90){
        printf("A\n");
    }
    else if(marks>=80 && marks<=90){
        printf("B\n");
    }
    else {
        printf("padho yrr\n");
    }
    return 0;
}