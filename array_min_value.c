//to find the minimum value from the entire array

#include<stdio.h>
int main(){
    int min,i,j,n,A[5]={2,91,18,10,100};
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        printf("Enter element%d : ",i+1);
        scanf("%d",&A[i]);
    }
    min=A[0];
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(min>A[j]){
                min=A[j];
            }
        }A[i]=min;
    }
    A[0]=min;
    printf("Minimum value = %d",min);
    for (i=0;i<5;i++){
            printf("\nValue of element A[%d] = %d",i+1,A[i]);
        }
    return 0;
}
