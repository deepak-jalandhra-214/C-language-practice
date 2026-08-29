#include<stdio.h>
void printaddress(int a);
void _printaddress(int *a);
int main(){
    int a=1;
    printf("address is :%d\n",&a);
    printaddress(a);
     printf("address is :%d\n",&a);
      _printaddress(&a);
    return 0;
}
void printaddress(int a){
    printf("address is :%d\n",&a);
}
void _printaddress(int *a){
    printf("address is :%d\n",a);
}