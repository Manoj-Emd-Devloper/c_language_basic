#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the number a = ");
    scanf("%d",&a);
    printf("Enter the number b = ");
    scanf("%d",&b);

    //bitwise XOR operator
    a= a^b;
    // printf("a=%d \n",a);
    b= a^b;
    // printf("b=%d \n",b);
    a= a^b;
    // printf("a=%d \n",a);
    printf("bitwise XOR operation of a=%d and b=%d \n",a,b);//binary operator, result in decimal
    
    return 0;
}