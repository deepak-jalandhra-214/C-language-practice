#include<stdio.h>

void dowork(int a,int b,int *sum,int *prd,float *avg);
int main(){
    int a=2,b=3,sum,prd;
    float avg;
    dowork(a,b,&sum,&prd,&avg);
    printf("sum=%d ,prd=%d and avg=%f",sum,prd ,avg);
    return 0;
}
void dowork(int a,int b,int *sum,int*prd,float *avg){
      *sum=a+b;
      *avg=(a+b)/2.0;
      *prd=a*b;
}