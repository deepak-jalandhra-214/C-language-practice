#include<stdio.h>

int main(){
    int n ,sum=0;
    printf("enter the n :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    
    printf("sum of first natural no. n is :%d\n",sum);
    for(int i=n;i>=1;i--){
        printf("reverse :%d\n",i);
    }
    return 0;
}