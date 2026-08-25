#include<stdio.h>
int main(){
    int j;
    printf("enter the no. :");
    scanf("%d",&j);
    for(int i=10;i>=1;i--){
        printf("%d\n",i*j);
    }
    return 0;

}