#include<stdio.h>
void printHW(int c);

int main(){
    printHW(6);
    return 0;
}
void printHW(int c){
    if(c==0){
        return ;
    }
    printf("hello world\n");
    printHW(c-1);
}