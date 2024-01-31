#include <stdio.h>
void print();
int fun1();

int a;
int main() {
    a=10;// here the global variable value is 10
    fun1();
    return 0;
}

int fun1(){
    int a=20;
    print();
}

void print(){
    printf(" a = %d \n",a);
}