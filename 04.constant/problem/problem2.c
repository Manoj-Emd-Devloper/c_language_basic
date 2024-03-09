#include <stdio.h>
#define STRING "%s \n"
#define ARG "Hello world!"

int main() {
    printf(STRING,ARG); // macros replace the name with value
    return 0;
}