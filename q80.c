#include<stdio.h>
void storetable(int table[][10],int n , int m );

int main(){
    int table[2][10];
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    storetable(table, 0,10);
    return 0;
}
void storetable(int table[][10],int n,int m ){
    for(int i=0;i < m;i++){
        table[n][i] =2* (i + 1);
    }
    for (int i=0;i < m;i++){
        table[n+1][i] =  (i + 1) *3;
    }
    for(int i=0;i<m;i++){
        printf("%d\t",table[n][i]);
    }
    printf("\n");
    for(int i=0;i<m;i++){
        printf("%d\t",table[n+1][i]);
    }
    printf("\n");
}