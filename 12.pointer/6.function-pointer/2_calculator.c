#include <stdio.h>
#define ops 4
float sum(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main() {
    float (* ptr[ops]) (float,float) = {sum , sub , mul , div};
    int choice;
    float a,b,result;
    printf("Enter the number for : 0=addition , 1=subtraction , 2=multiplication , 3=divison \n");
    scanf("%d",&choice);
    printf("Enter the two number = \n");
    scanf("%f %f",&a,&b);

    result = ptr[choice](a,b);

    printf("Result = %f \n", result);
    return 0;
}

float sum(float a, float b) { return a+b;}
float sub(float a, float b) { return a-b;}
float mul(float a, float b) { return a*b;}
float div(float a, float b) { return a/b;}