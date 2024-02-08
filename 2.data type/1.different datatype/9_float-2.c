#include <stdio.h>

int main() {
    int var = 4/9;//integer never represent fraction part it's truncked fraction number after decimal point
    printf("var = %d \n" , var );

    float var1 = 4/9; //here divison by 4 and 9 integer result getting 0.00 
    printf("var1 = %.2f \n" , var1);

    float var2 = 4.0/9.0;// .0 is make the value double by default 
    printf("var2 = %f \n" , var2 );
    return 0;
}