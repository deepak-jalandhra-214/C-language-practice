#include<stdio.h>

void hello();
void bye();

int main(){
    hello();
    bye();
    hello();
    return 0;
}
void hello(){
    printf("hello\n");
}
void bye(){
    printf("good bye\n");
}