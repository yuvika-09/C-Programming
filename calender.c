// generate calender of a month given start day of the week nd no of days in that month

#include<stdio.h>
int main(){
    int s,n,r,d=1,k=1;
    printf("Enter no of days in month: ");
    scanf("%d",&n);
    printf("Enter starting day of month: ");
    scanf("%d",&s);
    if((n+s)>36)
        r=6;
    else 
        r=5;
    printf("S  M  T  W  T  F  S\n");
    printf("-------------------\n");
    for (int i=1;i<=r;i++){
        for (int j=1;j<=7;j++){
            if(d<s && i==1){
                printf("   ");
                d++;
            }
            else if(k>n)
                break;
            else if(k<10)
                printf("%d  ",k++);
            else
                printf("%d ",k++);
            }
            printf("\n");
        } 
}
