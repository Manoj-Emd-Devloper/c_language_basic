#include <stdio.h>

int main() {
    printf("Date : %s \n" , __DATE__);
    printf("Time : %s \n" , __TIME__);
    return 0;
}
//here __DATE__ and __TIME__ are predefine macros in stdio.h file