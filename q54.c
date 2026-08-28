#include<stdio.h>

int fib(int n);
int main(){
    int i;
    printf("enter the n :");
    scanf("%d",&i);
    printf("fibonacci of n is :%d",fib(i));
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    int result=fib(n-1)+fib(n-2);
    return result;
}
