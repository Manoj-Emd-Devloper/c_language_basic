#include <stdio.h>

int main() {
    char c = 255 ;
    c = c + 10;
    printf("c = %d \n", c);
    return 0;
}
//answer is 9
//unsigned char or char can store 1byte of data range from (0 to 255) or (-128 to 127). if we add +10 then 255 + 10 = 265
//the value is execeeding and start from 0
//also calculate by mod 2^8 =256 (^8 is 8 bit) , 265%256 =9 