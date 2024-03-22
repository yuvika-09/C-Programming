// Program to find the factorial of a number input by user
#include<stdio.h>
int main(){
    int n,fact=1;
  // fact = factorial
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>=1){
        fact=fact*n;
        n=n-1;
    }
    printf("Factorial = %d",fact);
}
