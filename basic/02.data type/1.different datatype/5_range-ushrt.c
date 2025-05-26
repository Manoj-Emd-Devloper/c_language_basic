#include <stdio.h>
#include <limits.h>

int main() {
    short unsigned int var1 = 0;
    short unsigned int var2 = USHRT_MAX;
    printf("The range of short unsigned int is from %u to %u \n", var1, var2);
    return 0;
}