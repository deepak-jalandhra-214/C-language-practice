#include<stdio.h>
void printno(int *ptr);
int main(){
    int no[]={1,2,3,4,5};
    int *ptr=&no[0];
    printno(ptr);
    return 0;
}
void printno(int *ptr){
    for(int i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    }
}