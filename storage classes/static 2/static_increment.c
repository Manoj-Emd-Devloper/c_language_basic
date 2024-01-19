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