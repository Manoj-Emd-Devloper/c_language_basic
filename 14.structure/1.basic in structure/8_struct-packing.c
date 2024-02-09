#include <stdio.h>
#pragma pack(1) // used for avoid memory wastage but the cpu cycle is wastage 

struct var{
    char x;
    int  y;
    char z;
};

int main() {
    struct var size;
    printf(" The size var struct = %d \n", sizeof(size));
    return 0;
}