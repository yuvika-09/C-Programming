// find reverse of the number input by user and the sum of its digits

#include<stdio.h>
int main(){
    int m,n,sum=0,rev=0;
    printf("Enter no. : ");
    scanf("%d",&n);
    while (n>0){
        m=n%10;
        sum+=m;
        n=n/10;
        rev=rev*10+m;
    }
    printf("Sum of digits = %d \n",sum);
    printf("Reverse of no. : %d \n",rev);
}
