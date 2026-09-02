#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0]=40;
    marks[0][1]=70;
    marks[0][2]=90;
    marks[1][0]=50;
    marks[1][1]=80;
    marks[1][2]=100;
    printf("Marks of student 1:math %d, science %d, english %d\n", marks[0][0], marks[0][1], marks[0][2]);
    printf("Marks of student 2:math %d, science %d, english %d\n", marks[1][0], marks[1][1], marks[1][2]);
    return 0;
}