#include<stdio.h>

void findmax(int a,int b,int *c);
int main(){
    int a,b,c;
    printf("enter the no.:");
    scanf("%d",&a);
    printf("enter the no.:");
    scanf("%d",&b);
    findmax(a,b,&c);
    printf("the maxium no. is :%d",c);
    return 0;
}
void findmax(int a,int b,int *c){
    if(a>b){
        *c=a;
    }
    else {
        *c=b;
    }

}