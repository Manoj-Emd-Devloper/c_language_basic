#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the number 1 = ");
    scanf("%d",&a);
    printf("Enter the number 2 = ");
    scanf("%d",&b);

    //bitwise AND operator
    printf("The AND operation of a&b = %d \n", (a & b) );//binary operator, result in decimal
    //bitwise OR operator
    printf("The OR operation a|b = %d \n",a|b);//binary operator, result in decimal
    //bitwise NOT operator
    printf("The NOT operation of ~a = %d \n",~a);//unary operator, result in decimal

    return 0;
}