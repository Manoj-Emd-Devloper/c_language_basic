#include <stdio.h>
int fun();
int main() {;
    printf("%d\n",fun());
    printf("%d\n",fun());
    return 0;
}
int fun(){ 
    static int x=10;// the variable is terminted in the scope but the value is remain till lifetime of program
    return x++; 
}