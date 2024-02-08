#include <stdio.h>

int main() {
    short int var = 32768;
    printf("The value of var = %d \n" , var);
    return 0;
}
// The result is -32768 . which is the minimum value of short int integer. 
//it's happen because of execeeding the range of short int