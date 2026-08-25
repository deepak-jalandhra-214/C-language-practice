#include<stdio.h>

int main(){
    int i;
    do{
        printf("enter even no. :");
        scanf("%d",&i);
        printf("%d\n",i);
        if(i%7 ==0){
            break;
        }
    }while(1);
    printf("end");

    return 0;
}