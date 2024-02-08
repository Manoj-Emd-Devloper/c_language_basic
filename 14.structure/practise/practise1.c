//wap to create calculator using structure and function pointer
#include <stdio.h>
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

typedef struct{
    float operand1;
    float operand2;
    float (*operation[4])(float, float);
}Calculator_t;



int main() {
    Calculator_t calc = {.operation={add,subtract,multiply,divide}};
    float result;
    int operator;

    printf("Enter  operands 1 : ");
    scanf("%f", &calc.operand1);
    printf("Enter  operands 2 : ");
    scanf("%f", &calc.operand2);
    printf("Enter the number for : 0=addition , 1=subtraction , 2=multiplication , 3=divison \n");
    scanf("%d",&operator);
    
    result = calc.operation[operator](calc.operand1, calc.operand2);
    printf("Result: %f\n", result);
    return 0;
}

float add(float a, float b) {return a + b;}
float subtract(float a, float b) {return a - b;}
float multiply(float a, float b) {return a * b;}
float divide(float a, float b) {return a / b;}
