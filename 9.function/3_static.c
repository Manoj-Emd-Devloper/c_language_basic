#include <stdio.h>
int fun();
int main() {
    int var;
    var=fun();
    printf("%d\n",var);
    printf("%d\n",fun());
    return 0;
}
int fun(){ 
    static int x=10;// the variable is terminted in the scope but the value is remain in lifetime of program
    return x++; 
}