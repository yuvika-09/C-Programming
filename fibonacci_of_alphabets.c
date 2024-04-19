//fibonacci series of alphabets when the first tern is a and second is b

#include<stdio.h>
#include<string.h>
void main(){
    char a[10]="a", b[10]="b",c[10];
    printf("%s %s ",a,b);
    for(int i=0;i<=3;i++){
        strcpy(c,b);
        strcat(b,a);
        strcpy(a,c);
        printf("%s ",b);
    }
}
