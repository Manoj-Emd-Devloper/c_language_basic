//write a program for additing two number without plus operator using half adder
#include <stdio.h>

int main() {
    int x,y,sum,carry;
    printf("Enter the x number:");
    scanf("%d",&x);

    printf("Enter the y number:");
    scanf("%d",&y);

    while(y!=0){
        sum=x^y;
        carry=(x&y)<<1;
        x=sum;
        y=carry;
    }

    /* x=7 y=7
    x->0111
    y->0111
    y!=0-> true;
    iteration 1: sum=0000, carry=0111->1110
    iteration 2: sum=1110, carry=0000 
    y==0->false*/

    printf("the sum of two integer = %d \n",x);

    return 0;
}