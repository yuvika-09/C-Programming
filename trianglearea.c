// find area of triangle where sides are input by user

#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,s,ar;
    printf("Enter first side of triangle: ");
    scanf("%f",&a);
    printf("Enter second side of triangle: ");
    scanf("%f",&b);
    printf("Enter third side of triangle: ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar=s*(s-a)*(s-b)*(s-c);
    printf("Area of triangle= %.3f",pow(ar,0.5));
}
