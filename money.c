// calculate total amount of money in piggybank given the coins are of 20,10,5,2,1 

#include<stdio.h>
int main(){
    int c20,c10,c5,c2,c1,sum;
    printf("Enter no of coins of Rs.20: ");
    scanf("%d",&c20);
    printf("Enter no of coins of Rs.10: ");
    scanf("%d",&c10);
    printf("Enter no of coins of Rs.5: ");
    scanf("%d",&c5);
    printf("Enter no of coins of Rs.2: ");
    scanf("%d",&c2);
    printf("Enter no of coins of Rs.1: ");
    scanf("%d",&c1);
    sum=(c20*20)+(c10*10)+(c5*5)+(c2*2)+(c1*1);
    printf("Total money in piggybank = %d\n",sum);
    return 0;
}
