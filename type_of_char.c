//check the type of character input by the user

#include<stdio.h>
int main(){
    char c;
    printf("Enter character: ");
    scanf("%c",&c);
    if (c>=65 && c<=90)
        printf("Capital letter");
    else if (c>=97 && c<=122)
        printf("Small case letter");
    else if(c>=48 && c<=57)
        printf("Digit");
    else
        printf("Special symbol");
}
