#include<stdio.h>

int main(){
    int n,result;
    printf("enter the n :");
    scanf("%d",&n);
    int a=0;
    int b=1;
    for(int i=0;i<n;i++){
        int result=a+b;
        a=b;
        b=result;
        printf("fib of %d is :%d\n",i,b);
    }
    return 0;
}