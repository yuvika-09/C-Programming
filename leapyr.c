// check whether the year input by user is a leap year or not

#include<stdio.h>
void main(){
    int yr;
    printf("Enter year: ");
    scanf("%d",&yr);
    if((yr%4==0 && yr%100!=0)||(yr%100==0 && yr%400==0)) {
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year");
    }
}
