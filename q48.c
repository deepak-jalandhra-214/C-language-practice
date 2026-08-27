#include<stdio.h>


void square(float a);
void rectangle(float i,float j);
void circle(float r,float pi);

int main(){
    float n,b,c,r,pi=3.14;
    printf("enter side of square: ");
    scanf("%f",&n);
    printf("enter length of rectangle:");
    scanf("%f",&b);
    printf("enter width of rectangle:");
    scanf("%f",&c);
    printf("enter radius of circle: ");
    scanf("%f",&r);
    square(n);
    rectangle(b,c);
    circle(r,pi);
    return 0;
}
void square(float n){
    printf("area of square is :%f\n",n*n);
}
void rectangle(float i,float j){
    printf("area of rectangle is :%f\n",i*j);
}
void circle(float r, float pi){
    printf("area of circle is :%f\n",pi*r*r);
}