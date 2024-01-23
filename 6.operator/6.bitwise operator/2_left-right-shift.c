#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the number of a = ");
    scanf("%d",&a);
    b=a;
    
    //bitwise left shift operator
    printf("The left shift operation of a<<1=%d \n",a<<1);//unary operator, result in decimal,shit by 1 bit at left side

    //bitwise right shift operator
    a=b;
    printf("The right shift operation ofa>>1=%d \n",a>>1);//unary operator, result in decimal,shit by 1 bit at right side

    return 0;
}