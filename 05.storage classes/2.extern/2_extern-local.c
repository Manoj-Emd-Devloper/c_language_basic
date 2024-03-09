//if a extern is in local scope. then it's tell compiler find the defination of variable out of present scope
#include <stdio.h>
int a = 7;
int main() {
    extern int a;
    printf("a = %d \n", a);
    return 0;
}