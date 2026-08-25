#include<stdio.h>

int main(){
    int fact=1,n;
    printf("enter the no. :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
        
    }
    printf("%d",fact);
    return 0;
}