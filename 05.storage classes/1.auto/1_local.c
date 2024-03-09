//All variable in scope are by default auto variable
#include <stdio.h>

//local scope
int main() {
    auto int var = 10;//with variable initiallaztion
    int a;//without auto and variable initiallazation
    printf("var = %d , a = %d \n",var,a);
    return 0;
}