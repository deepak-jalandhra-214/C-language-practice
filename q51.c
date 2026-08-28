#include<stdio.h>

int fact(int a);
int main(){
    int i;
    printf("enter the no. :");
    scanf("%d",&i);
    printf("factorial is :%d",fact(i));
    return 0;
}
int fact(int i){
    if(i==0){
        return 1;
    }
    int fact1=fact(i-1);
    int fact=fact1*i;
    return fact;
}