#include<stdio.h>

float f_to_c(float i);
int main(){
    float f;
    printf("enter the f:");
    scanf("%f",&f);
    printf("in celcius :%f",f_to_c(f));
    return 0;
}
float f_to_c(float j){
    float celcius=(j-32)*5/9;
    return celcius;
}
