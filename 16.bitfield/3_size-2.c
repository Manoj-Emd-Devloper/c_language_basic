#include <stdio.h>

//bitfield structure
typedef struct{
    unsigned int True2 : 32;//the int is 4 byte = 32 bit which is all assign to true2 variable
    unsigned int False2 : 1;//take new int
}Bool2;
//if bit are execeeding from 32 bit then struct variable take 8 byte


int main() {
    Bool2 var2;
    var2.True2 = 1;
    printf("The size of bitfield struct is = %d \n", sizeof(var2));
    printf("The True= %d \n", var2.True2);
    return 0;
}