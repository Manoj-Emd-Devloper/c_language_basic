#include <stdio.h>

int main() {
    char c = 255 ;
    printf("c = %d \n", c);
    c = c + 10;
    printf("c = %d \n", c);
    return 0;
}
//answer is 9
//unsigned char or char can store 1byte of data range from (0 to 255) or (-128 to 127).
//the value is execeeding and c = -1 after c = -1 + 10 = 9

//also calculate by mod m= 2^8 =256 (^8 is 8 bit) , c = 255 + 10 = 265
//c%m = 265%256 = 9 