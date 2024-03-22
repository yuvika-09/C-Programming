//check whether no is armstrong or not
#include<stdio.h>
int main(){
    int n,p,sum=0,a,i;
    printf("Enter number: ");
    scanf("%d",&n);
    i=n;
    while(n>0){
        a=n%10;
        p=a*a*a;
        sum=sum+p;
        n=n/10;
        if(sum==i)
            printf("Armstrong number");
        else
            printf("Not armstrong number");
        }
  return 0;
}
