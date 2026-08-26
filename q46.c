#include<stdio.h>

void calculate_price(float i);
int main(){
    float v=100.0;
    calculate_price(v);
    return 0;
}
void calculate_price(float value){
    value=value+(0.18*value);
    printf("price is :%f\n",value);
}