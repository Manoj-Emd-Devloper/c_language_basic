#include <stdio.h>

typedef struct{
    unsigned int True1 : 3;
    unsigned int False1 : 4;
}Bool1;

typedef struct{
    unsigned int True2 : 1;
    unsigned int : 0; // by using the unnamed bit field with width 0 it's force to next boundary of memory 
    unsigned int False2 : 3;
}Bool2;


int main() {
    Bool1 var1;
    Bool2 var2;

    printf("The size of bool1 struct is = %d \n", sizeof(var1));// 4byte
    printf("The size of bool2 struct is = %d \n", sizeof(var2));// 8byte
    return 0;
}