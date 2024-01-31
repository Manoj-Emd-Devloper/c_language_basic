#include <stdio.h>
int fun1(int);
int fun2(int);
int a=20;
int main() {
    int a=5;

    a = fun1(a);
    printf("a = %d \n",a);
    return 0;

}

int fun1(int b){
    return b = b + fun2(25);
}

int fun2(int b){
    int c;
    return c = a + b;
}