#include<stdio.h>
void printno(int no[],int n);
int main(){
    int no[]={1,2,3,4,5};
    printno(no,5);
    return 0;
}
void printno(int no[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",no[i]);
    }
}