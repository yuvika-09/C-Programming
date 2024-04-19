//to find the length of a string unput by the user

#include<stdio.h>
#include<strings.h>
void main(){
    char s[30],a;
    int len=0;
    scanf("%[^\n]s",&s);
    strlwr(s);
    for(int i=0;s[i]!='\0';i++){
        len++;
    }
    printf("Length of string : %d",len);
}
