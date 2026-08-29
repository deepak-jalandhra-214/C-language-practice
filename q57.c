#include<stdio.h>
#include<math.h>

float root(int i);

int main(){
    float a;
    printf("enter the no. :");
    scanf("%f",&a);
    float b=root(a);
    printf("square root of given no. is :%f",b);
    return 0;
}
float root(int j){
    return pow(j,1.0/2);
}
