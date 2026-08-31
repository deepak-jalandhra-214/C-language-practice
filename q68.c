#include<stdio.h>
int main(){
    int age=33;
    int *ptr=&age;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u\n",ptr);
    char star='a';
    char *h=&star;
    printf("%u\n",h);
    h++;
    printf("%u\n",h);
    h--;
    printf("%u\n",h);

    return 0;
}