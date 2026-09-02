#include<stdio.h>
int main(){
    int age[5];
    
    for(int i=0;i<5;i++){
        printf("enter age of %d student:",i+1);
        scanf("%d",&age[i]);
    }
    for(int i=0;i<5;i++){
        printf("age of %d student is:%d\n",i+1,age[i]);
    }
    return 0;

}