#include <stdio.h>
void increment();
int main() {
    increment();
    increment();
    increment();
    increment();
    increment();
    extern int a;
    //printf("a2=%d\n",a);
    return 0;
}

void increment(){
    static int a=0;
    a++;
    printf("a=%d\n",a);
    printf("address of a= %p \n",&a);
}

//static variable have main used for the variable is remain in memory even after block is terminated
//static variable are visible only for a scope