/* If a year is input through the keyboard find what is the day on 1st January of this year */

#include<stdio.h>
int main(){
    int yrgiven=2001;
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    int diff=year-yrgiven;
    int leapyr=(diff/4);
    int nonleapyr=diff-leapyr;
    int days=(leapyr*366)+(nonleapyr*365)+1;
    if (days%7==0)
        printf("Sunday");
    if (days%7==1)
        printf("Monday");
    if (days%7==2)
        printf("Tuesday");
    if (days%7==3)
        printf("Wednesday");
    if (days%7==4)
        printf("Thursday");
    if (days%7==5)
        printf("Friday");
    if (days%7==6)
        printf("Saturday");
}
