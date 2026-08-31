#include<stdio.h>
int main(){
    float price[3];
    printf("enter 1 price :");
    scanf("%f",&price[0]);
    printf("enter 2 price :");
    scanf("%f",&price[1]);
    printf("enter 3 price :");
    scanf("%f",&price[2]);
    printf("price 1 with gst is :%f\n",price[0]+(price[0]*0.18));
    printf("price 1 with gst is :%f\n",price[1]+(price[1]*0.18));
    printf("price 1 with gst is :%f\n",price[2]+(price[2]*0.18));
    return 0;

}