// wap to create calculator using structure and function pointer
#include <stdio.h>
float addition(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

typedef struct
{
    float (*add)(float, float);
    float (*sub)(float, float);
    float (*mul)(float, float);
    float (*div)(float, float);
} Calculator_t;

int main()
{
    Calculator_t calc = {addition, subtract, multiply, divide};
    float operand1;
    float operand2;
    float result;
    int operator;

    printf("Enter the operand 1 : ");
    scanf("%f", &operand1);
    printf("Enter  operands 2 : ");
    scanf("%f", &operand2);
    printf("Enter the number for : 0=addition , 1=subtraction , 2=multiplication , 3=divison \n");
    scanf("%d", &operator);
    float calc1[4] = {calc.add(operand1, operand2), calc.sub(operand1, operand2), calc.mul(operand1, operand2), calc.div(operand1, operand2)};
    result = calc1[operator];
    printf("Result: %.2f\n", result);
    return 0;
}

float addition(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }
