#include <stdio.h>

int main() {
    register int i = 10;
    printf("i = %d \n" , i);
    return 0;
}

//Registers are faster than memory to access, so the variables 
//which are most frequently used in a C program can be put in registers using the register keyword.