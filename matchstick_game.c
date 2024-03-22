/*  A program for matchstick game being played between the computer and user. 
Your program should ensure that the computer always win. 
Rules for game are as follows:
- There are 21 matchsticks.
- Computer asks the player to pick 1,2,3 or 4 matchsticks.
- After person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick, loses.  */

#include<stdio.h>
int main(){
    int tm=21,u,c;
  // tm = total matchsticks , u = user , c = computer 
    while(1){
        printf("Total matchsticks : %d\n",tm);
        printf("User picks : ");
        scanf("%d",&u);
        if(u>4 || u<1){
            printf("Pick between 1-4\n");
            continue;
        }
        printf("Computer picks : %d\n",5-u);
        tm=tm-5;
        if(tm==1){
            printf("Total matchsticks : %d\n",tm);
            printf("User lost !\n");
            break;
        }
    }
    return 0;
}
