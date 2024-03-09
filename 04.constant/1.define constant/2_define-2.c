#include <stdio.h>
#define value 89 //prefer to write a macros in capital letter 

int main() {
    // int value = 49; //these show an error
    
    printf("The value = %d \n", value); //in printf double quotes value is never change. And placeholder can replace the value 
    return 0;
}