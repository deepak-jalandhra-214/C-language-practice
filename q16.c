#include<stdio.h>

int main(){
    int marks;
    printf("enter the marks :");
    scanf("%d",&marks);
    if (marks>90){
        printf("grade :A\n");
    }
    else  if ( 90>marks && marks>80){
        printf("grade:C\n");
    }
    else if (80>marks&& marks>70){
        printf("grade:D\n");
    }
    else  {
        printf("padho beta\n");
    }
    printf("thank you");
    return 0;

}