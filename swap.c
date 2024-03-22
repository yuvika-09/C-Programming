// swap variables without using temporary variables

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("a=%d , b=%d",a+b-b,a+b-a);
}
