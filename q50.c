#include<stdio.h>

int sum(int n);
int main(){
    int a;
    printf("enter he no.:");
    scanf("%d",&a);
    printf("sum is :%d",sum(a));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumN1=sum(n-1);
    int sumN=sumN1+n;
    return sumN;
}