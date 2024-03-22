// check whether no is even or odd 

#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    switch(n%2){
        case 0:
            printf("even");
            break;
        case 1:
            printf("odd");
            break;
    }
}
