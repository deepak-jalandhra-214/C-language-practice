#include<stdio.h>
void storetable(int table[][],int n , int m , int number);

int main(){
    int table[10][2];
    storetable(table, 10, 2, 5);
    return 0;
}
void storetable(int table[][],int n,int m ,int number){
    for(int i=1;i <= n;i++){
        int result = number * i;
        
    }
    printf("the table of %d is:\n",number);
}