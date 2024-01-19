#include <stdio.h>

int main() {

    int a,b,c;

    printf("Enter the number 1 = ");
    scanf("%d",&a);
    printf("Enter the number 2 = ");
    scanf("%d",&b);
    printf("\n");

    c=a;

    printf("the addition of that two operand a+b is= %d \n",(a+b));
    printf("the subtraction of that two operand a-b is= %d \n",(a-b));
    printf("the multiplication of that two operand  a*b is= %d \n",(a*b));
    printf("the divison of that two operand a/b is= %d \n",(a/b));
    printf("the modulus of that two operand a%%b is= %d \n",(a%b));

    printf("the sign value of a is = %d \n",+a);
    printf("the negative sign value of a is = %d \n",-a);

    //for single operand operation using increment and decrement operators
    printf("The pre increment of a is= %d \n",++a);
    a=c;
    printf("The pre decrement of a is= %d \n",--a);

    //The precedence and the associative of the arithmetic operator
    printf("The value of a * b / c = %d \n",a * b / c);
    printf("The value of a + b - c = %d \n",a + b - c);


    getchar();
    getchar();
    return 0;
}