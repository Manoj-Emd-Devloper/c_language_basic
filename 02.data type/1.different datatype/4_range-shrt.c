#include <stdio.h>
#include <limits.h>

int main() {
    short int var1 = SHRT_MIN;
    short int var2 = SHRT_MAX;
    printf("The range of signed short int is from %d to %d \n", var1, var2 );
    return 0;
}