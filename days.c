// wap to display no of days in the month that is input by user

#include<stdio.h>
int main(){
    int m,yr;
    printf("Enter month(1-12): ");
    scanf("%d",&m);
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;
        case 2:
            printf("Enter year: ");
            scanf("%d",&yr);
            if((yr%4==0 && yr%100!=0)||(yr%100==0 && yr%400==0)) {
                printf("29 days");
            }
            else{
                printf("28 days");
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;
        default:
            printf("Invalid input");
            break;
    }
}
