/* Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Thus paper of size A1 would have dimensions 841 mm x 594 mm. Write a program to calculate and print paper sizes A0, A1, A2, … A8. */

#include<stdio.h>
int main(){
    int r100,r50,r10,r5,r2,r1,am;
    // am = amount
    printf("Enter amount : ");
    scanf("%d",&am);
    r100=am/100;
    am=am%100;
    r50=am/50;
    am=am%50;
    r10=am/10;
    am=am%10;
    r5=am/5;
    am=am%5;
    r2=am/2;
    am=am%2;
    r1=am/1;
    am=am%1;
    printf("100 rupee notes: %d \n50 rupee notes: %d \n10 rupee notes: %d \n5 rupee notes: %d \n2 rupee notes: %d \n1 rupee notes: %d \n",r100,r50,r10,r5,r2,r1);
    return 0;
}
