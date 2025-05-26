//write a program for in which function are call by refference with static scope
#include <stdio.h>
int fun1(int*);
void fun2(int*);

int a = 3;
void main() {
    fun1(&a);
}

int fun1(int *y){
    int a = 1;
    a = *y - a;
    //printf(" a = %d \n",a);

    fun2(&a);
    printf(" a = %d \n",a);
}

void fun2(int *x){
    *x = ( (*x) * a);
    printf(" x = %d \n",x);
}