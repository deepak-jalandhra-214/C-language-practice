#include<stdio.h>
void storetable(int table[][10],int n ,int m ,int number );
int main(){
    int table[2][10];
    int number;
    printf("enter the first number :");
    scanf("%d",&number);
    storetable(table,0,10,number);
    printf("enter the second number :");
    scanf("%d",&number);
    storetable(table,1,10,number);
    return 0;
}
void storetable(int table[][10],int n,int m,int number){
    for(int i=0;i<m;i++){
        table[n][i]=number*(i+1);
        printf("%d\t",table[n][i]);
    }
    printf("\n");

}