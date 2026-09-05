#include<stdio.h>
void reverse(int *ptr,int n);
int main(){
    int random[]={1,2,3,4,5};
    int *ptr=&random[0];
    reverse(ptr,5);
    return 0;
}
void reverse(int *ptr,int n){
    for(int i=0;i<n/2;i++){
        int first=*(ptr+i);
        int last =*(ptr+n-1-i);
        *(ptr+i)=last;
        *(ptr+n-1-i)=first;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
}