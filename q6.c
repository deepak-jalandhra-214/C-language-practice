#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    a=b=2;
    int c=b+a;
    int bitwise=b^c;
    printf("%d\n",bitwise);
    int power=pow(b,c);
    printf("%d\n",power);
    return 0;
}