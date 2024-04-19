#include<stdio.h>
#include<strings.h>
void main(){
    char s1[60],s2[30],a;
    int len1=0,len2=0;
    printf("Enter string1: ");
    scanf("%s",&s1);
    printf("Enter string2: ");
    scanf("%s",&s2);
    for(int i=0;s1[i]!='\0';i++){
        len1++;
    }
    for(int i=0;s2[i]!='\0';i++){
        len2++;
    }
    for(int i=len1,j=0;s2!='\0',j<=len2;i++,j++){
        s1[i+1]=s2[j];
    }
    printf("Concatenated string :");
    for(int i=0;i<=len1+len2;i++){
        printf("%c",s1[i]);
    }
}
