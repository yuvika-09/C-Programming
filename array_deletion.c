//delete an element from the array from the location defined by user

#include<stdio.h>
int main(){
    int i,loc,n;
    printf("Enter the no of elements you want in your array : ");
    scanf("%d",&n);
    int A[n];
    for (i=0;i<n;i++){
        printf("Enter value at A[%d] : ",i+1);
        scanf("%d",&A[i]);
    }
    printf("Enter location to delete element : ");
    scanf("%d",&loc);
    if(loc>=n){
        printf("Location doesnot exist");
    }
    else{
        for (i=loc-1;i<n;i++){
            A[i] = A[i+1];
        }
        for (i=0;i<n-1;i++){
            printf("\nValue of element A[%d] = %d",i+1,A[i]);
        }
    }
    return 0;
}
