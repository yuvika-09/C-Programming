// check whether the triangle is valid or not when angles are input by the user

#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter angle1: ");
    scanf("%f",&a);
    printf("Enter angle2: ");
    scanf("%f",&b);
    printf("Enter angle3: ");
    scanf("%f",&c);
    if((a+b+c)==180)
        printf("Triangle is valid");
    else
        printf("Triangle is invalid");
}
