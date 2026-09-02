#include<stdio.h>
void reverse(int *ptr,int n);
int main(){
    int array[]={1,2,3,4,5};
    int *ptr=&array[0];
    reverse(ptr,5);
    return 0;
}
void reverse(int *ptr,int n){
    for(int i=0;i<n/2;i++){
        int first=*(ptr+i);
        int last=*(ptr+n-i-1);
        *(ptr+i)=last;
        *(ptr+n-i-1)=first;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
}