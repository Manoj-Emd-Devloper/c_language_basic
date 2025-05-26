#include <stdio.h>
void print();
int fun1();
int fun2();

int a,b;
int main() {
    a=fun1();
    fun2();
    return 0;
}

void print(){
    printf("%d %d",a,b);
}

int fun1(){
    int a,c;
    a = 0 , b = 1 , c = 2;
    return c;
}

int fun2(){
    int b;
    a=3,b=4;
    print();
}