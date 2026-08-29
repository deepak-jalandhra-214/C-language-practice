#include<stdio.h>

void hot();
void cold();

int main(){
    char a;
    printf("enter the c and h  :");
    scanf("%c",&a);
    if(a=='h'){
         hot();
    }
    else if (a=='c'){
        
        cold();
    }
    else{
        printf("please enter the c and h!!");
    }
    return 0;
}
void hot(){
    printf("HOT");
}
void cold(){
    printf("cold");
}