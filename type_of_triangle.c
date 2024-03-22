// to check the type of triangle by taking sides of triangle as input by the user

#include<stdio.h>
int main(){
    float a,b,c,h2,b2,p2;
    printf("Enter side1: ");
    scanf("%f",&a);
    printf("Enter side2: ");
    scanf("%f",&b);
    printf("Enter side3: ");
    scanf("%f",&c);
    if (a>b && a>c){
        h2=a*a;
        b2=b*b;
        p2=c*c;
    }
    if (b>a && b>c){
        b2=a*a;
        h2=b*b;
        p2=c*c;
    }
    if (c>a && c>b){
        p2=a*a;
        b2=b*b;
        h2=c*c;
    }
    if (a==b && b==c){
        printf("Equilateral triangle");
    }
    else if(a==b || b==c || c==a ){
        printf("Isosceles triangle");
    }
    else if(a!=b && b!=c && c!=a)
        if(h2==b2+p2)
            printf("Right angled triangle");
        else
            printf("Scalene triangle");
}
