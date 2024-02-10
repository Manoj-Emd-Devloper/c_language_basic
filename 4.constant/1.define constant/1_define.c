#include <stdio.h>
#define PI 3.14519 // declare name in #define called as macros . The preprocessor is replace value with name
int main() {
    float var;
    var = PI;
    printf("pi = %.5f , var = %.5f \n" , PI , var);//use macros instead of value
    return 0;
}