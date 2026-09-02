#include<stdio.h>
void count_odd_no(int *ptr,int n);
int main(){
     int no[]={1,3,56,4,3,6,7,8,3,2,6,7,};
     int *ptr=&no[0];
     count_odd_no(ptr,12);
     return 0;
}
void count_odd_no(int *ptr,int n){
    for(int i=0;i<n;i++){
        if(ptr[i]%2!=0){
            printf("%d is odd number\n",ptr[i]);
        }
    }
}