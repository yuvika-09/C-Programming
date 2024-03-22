// check if the three points input by user are collinear or not

#include<stdio.h>
int main(){
    float x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter x1,y1: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter x2,y2: ");
    scanf("%f %f",&x2,&y2);
    printf("Enter x3,y3: ");
    scanf("%f %f",&x3,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2)
        printf("All points lie on straight line");
    else
        printf("All points donot lie on straight line");
}
