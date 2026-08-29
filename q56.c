#include<stdio.h>

int sum(int a,int b);
int main(){
    int a,b;
    printf("enter the no.");
    scanf("%d",&a);
     printf("enter the no.");
     scanf("%d",&b);
    int c=sum(a,b);
    printf("sum of given no. is :%d",c);
    return 0;
}
int sum(int i,int j){
    return i+j;
}