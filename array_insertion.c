//insert elements in an array from user

#include<stdio.h>
int main(){
    int i, A[5];
    for (i=0;i<5;i++){
        printf("Enter value at A[%d] : ",i+1);
        scanf("%d",&A[i]);
    }
    for (i=0;i<5;i++){
        printf("\nValue of element A[%d] = %d",i+1,A[i]);
    }
}
