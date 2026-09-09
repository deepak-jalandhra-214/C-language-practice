#include<stdio.h>
void greater_value(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5};
    greater_value(arr,5);
    return 0;
}

void greater_value(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("the greater value is %d",max);
}