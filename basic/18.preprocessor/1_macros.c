#include <stdio.h>//file inclusion used for include define or predefine function
#define PI 3.14519 //Macros are pieces of code or value in a program that is given some name.
int main() {
    float var;
    var = PI;
    printf("pi = %.5f , var = %.5f \n" , PI , var);//use macros instead of value
    return 0;
}