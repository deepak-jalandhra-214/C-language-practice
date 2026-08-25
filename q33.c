#include<stdio.h>

int main(){
    int product;
    printf("enter the no.: ");
    scanf("%d",&product);
    for (int i=1;i<=10;i++){
        printf("%d\n",product*i);
    }
    return 0;
} 