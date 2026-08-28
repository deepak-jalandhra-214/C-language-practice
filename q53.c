#include<stdio.h>

int calcpercentage(int science,int math ,int hindi );

int main(){
    int science,math,hindi;
    printf("enter science marks :");
    scanf("%d",&science);
    printf("enter math marks :");
    scanf("%d",&math);
    printf("enter hindi marks :");
    scanf("%d",&hindi);
    if((science+math+hindi)>300){
        printf("please enter the correct maarks");
        return 0;
    }
    else if ((science+math+hindi)<=300){
    printf("percentage is:%d ",calcpercentage( science,math, hindi));
    return 0;
    }
}
int calcpercentage(int science,int math ,int hindi ){
    int percentage=(science+math+hindi)*100/300;
    return percentage;
}