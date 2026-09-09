#include<stdio.h>

int main(){
    int n;
    printf("enter the number of elements :");
    scanf("%d",&n);
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            printf("element found at index %d",i);
            break;
        }
    }
}