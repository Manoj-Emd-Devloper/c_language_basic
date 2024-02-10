#include <stdio.h>
typedef struct{
    // bit field declaration
    unsigned int True : 1;//take 1 bit from 4 byte.
    unsigned int False : 1;
}Bool;

int main() {
    Bool var;
    var.True = 1;
    var.False = 0;
    printf("The True= %d \n", var.True);
    printf("The False= %d \n", var.False);
    return 0;
}