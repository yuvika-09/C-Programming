//search a particular element from the array

#include<stdio.h>
int main(){
    int i,e,flag=0,loc,n;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        printf("Enter element%d : ",i+1);
        scanf("%d",&A[i]);
    }
    printf("Enter element you want to search : ");
    scanf("%d",&loc);
    for (i=0;i<4;i++){
        e=A[i];
        if (e==loc){
            printf("Location of element = %d\n",i+1);
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("Element doesnot exist");
}
