//to find the frequency of the character the user want to find

#include<stdio.h>
void main(){
    char s[30],a;
    int c=0;
    scanf("%[^\n]s",&s);
    printf("Character you want to count: ");
    scanf(" %c",&a);
    for(int i=0;i<30;i++){
        if(s[i]==a)
            c++;
    }
    printf("Frequency of %c = %d",a,c);
}
