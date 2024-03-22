//sum of n numbers in a given range
#include<stdio.h>
int main(){
    int s,f,i,sum=0;
    printf("Enter starting number : ");
	scanf("%d",&s);
	i=s;
	printf("Enter ending number : ");
	scanf("%d",&f);
    while (i<=f){
        sum+=i;
        i++;
    }
    printf("Sum of numbers between %d-%d = %d",s,f,sum);
    return 0;
}
