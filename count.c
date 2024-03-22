// Program to count +ve , -ve and 0s entered by the user. After every input program should ask the user whether to continue or not

#include<stdio.h>
int main(){
    int n,cp=0,cn=0,cz=0;
  // cp = positive count , cn = negative count , cz = zeroes count
    char c;
    while(1){
        printf("Enter number : ");
        scanf("%d",&n);
        if(n>0){
            cp+=1;
        }
        else if(n<0){
            cn+=1;
        }
        else{
            cz+=1;
        }
        printf("Do you want to continue(y=1/n=0)? ");
        scanf(" %c",&c);
        if(c=='y')
            continue;
        else if(c=='n'){
            printf("Positive count : %d \nNegative count : %d \nZeroes count : %d",cp,cn,cz);
            break;
        }
    }
    return 0;
}
