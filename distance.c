#include<stdio.h>
int main(){
    unsigned char distanceA2B=160,distanceB2C=40;
    unsigned char distanceA2C;
    distanceA2C=distanceA2B+distanceB2C;
    printf("Total distance from A2C = %o Km\n",distanceA2C);
    return 0;
}