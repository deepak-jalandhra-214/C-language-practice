#include<stdio.h>
void square(int a);
void _square(int *l);


int main(){
    int n=4;
    square(n);
    printf("%d\n",n);
    _square(&n);
    printf("%d\n",n);
    return 0;
}
void square(int a){
    a=a*a;
    printf("%d\n",a);
}
void _square(int *n){
    (*n)=(*n)*(*n);
    printf("%d\n",*n);
}