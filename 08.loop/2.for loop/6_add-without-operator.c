//write program for add two number without plus operator
#include <stdio.h>

int main() {
    int x,y;
    printf("Enter the x number=");
    scanf("%d",&x);
    printf("Enter the y number=");
    scanf("%d",&y);
    for(;y>0;y--){
        x++;
    }
    printf("the sum of two number = %d \n",x);
    return 0;
}