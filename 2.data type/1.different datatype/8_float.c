#include <stdio.h>

int main() {
    float var = 3.1456896598875465;
    double var1 = 3.1456896598875465;
    long double var2 = 3.1456896598875465;

    //precision and byte are depended on machine
    printf("The size of float = %d \n", (int) sizeof(float));
    printf("The size of double = %d \n", (int) sizeof(double));
    printf("The size of long double = %d \n", (int) sizeof(long double));

    printf("float = %.10f \n", var); //in my machine after 6 precision number are trunked
    printf("double = %.12lf \n", var1); //in my machine after 12 precision number are truncked
    printf("long double = %.14Lf \n", var2);// in my machine after 16 precision number are truncked

    return 0;
}