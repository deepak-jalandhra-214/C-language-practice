#include<stdio.h>

void namste();
void bonjour();

int main(){
    char i,j;
    printf("enter the first letter of your country: ");
    scanf("%c",&i,&j);
    if(i==i){
        namste();
    }
    else if (j==j){
        bonjour();
    }
    return 0;
}
void namste(){
    printf("namste\n");
}
void bonjour(){
    printf("bonjour\n");
}