#include <stdio.h>
int fun1(int);
int fun2(int);
int a=5;
int main() {
    int a=10;
    a = fun1(a);
    printf("a = %d \n",a);
    printf("Original output is 30 but The c language is follow only the static scoping then output is 25! \n");
    return 0;
}

int fun1(int b){
    b+=10;
    return b = fun2(b);
}

int fun2(int b){
    int c;
    return c = a + b;
}