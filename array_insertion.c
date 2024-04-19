//insert elements in an array from user

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the no of elements you want in your array : ");
    scanf("%d",&n);
    int A[n];
    for (i=0;i<n;i++){
        printf("Enter value at A[%d] : ",i+1);
        scanf("%d",&A[i]);
    }
    //display the array
    for (i=0;i<n;i++){
        printf("\nValue of element A[%d] = %d",i+1,A[i]);
    }
}
