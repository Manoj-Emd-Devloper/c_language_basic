/*Conditional Compilation in C directives is a type of directive that helps to 
compile a specific portion of the program or to skip the compilation of some specific 
part of the program based on some conditions.*/

#include <stdio.h>
#define PI 3.14
int main() {

    #ifdef PI
    printf("PI is defined\n");
    #elif defined(SQUARE)
    printf("Square is defined\n");
    #else
    printf("Neither PI nor SQUARE is defined");
    #endif
   
    #ifndef SQUARE
    printf("Square is not defined"); 
    #else
    printf("square is defined");
    #endif

    return 0;
}