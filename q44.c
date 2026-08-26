#include<stdio.h>

int sum(int a,int b);

int main(){
    int a,b;
    printf("enter no. :");
    scanf("%d",&a);
    printf("enter the no. :");
    scanf("%d",&b);
    sum(a,b);
    printf("sum is :%d\n",sum(a,b));
    return 0;
}
int sum(int x,int y){
    return x+y;
}