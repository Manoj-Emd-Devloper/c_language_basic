#include <stdio.h>

//normal structure
typedef struct{
    unsigned int True1;//take 32 bit from first 4 byte in total 8 byte
    unsigned int False1;//it's take 32 bit of second 4 byte in total 8 byte
}Bool1;//size of this is 8 byte

//bitfield structure
typedef struct{
    unsigned int True2 : 1;//take 1 bit from total 4 byte.
    unsigned int False2 : 1;//it's take next 1 bit from 4 byte
}Bool2;//size of this is 4 byte by use bitfield and take one bit upto 32 variable


int main() {
    Bool1 var1;
    Bool2 var2;
    var2.True2 = 1;
    var1.False1 = 0;
    printf("The size of normal struct is = %d \n", sizeof(var1));
    printf("The size of bitfield struct is = %d \n", sizeof(var2));
    printf("The True= %d \n", var2.True2);
    printf("The False= %d \n", var1.False1);
    return 0;
}