// program to find roots of a quadratic equation

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float d,r1,r2,r;
    printf("Enter coefficient of x^2: ");
    scanf("%d",&a);
    printf("Enter coefficient of x: ");
    scanf("%d",&b);
    printf("Enter constant term: ");
    scanf("%d",&c);
    r=pow(b,2)-4*a*c;
    d=pow(r,0.5);
    r1=(-b+d)/(2*a);
    r2=(-b-d)/(2*a);
    if (d==0)
        printf("Equation has equal roots \nRoots of equation= %.4f",r1);
    else if (d>0)
        printf("Equation has real roots \nRoots of equation= %.4f , %.4f",r1,r2);
    else
        printf("Equation has imaginary roots \nRoots of equation= %.4f , %.4f",r1,r2);
}
