//write program for add two number without plus operator
#include <stdio.h>

int main() {
    int x,y;
    printf("Enter the x number:");
    scanf("%d",&x);

    printf("Enter the y number:");
    scanf("%d",&y);

    if(y>0){
        while(y>0){
            x++;
            y--;
        }
    } 

    if(y<0){
        while(y<0){
            x--;
            y++;
        }
    } 

    printf("the sum of two number = %d \n",x);
    return 0;
}