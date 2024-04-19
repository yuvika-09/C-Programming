//delete an element from the array from the location defined by user

#include<stdio.h>
int main(){
    int i,loc,A[4]={31,22,97,67};
    printf("Enter location to delete element : ");
    scanf("%d",&loc);
    if(loc>=4){
        printf("Location doesnot exist");
    }
    else{
        for (i=loc-1;i<4;i++){
            A[i] = A[i+1];
        }
        for (i=0;i<3;i++){
            printf("\nValue of element A[%d] = %d",i+1,A[i]);
        }
    }
}
