#include<stdio.h>

void table(int n);
int main(){
    int x;
    printf("enter no. :");
    scanf("%d",&x);
    table(x);
    return 0;
}
void table(int y){
    for(int i=1;i<=10;i++){
        printf("%d\n",i*y);
    }
}