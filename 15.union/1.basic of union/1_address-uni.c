#include <stdio.h>
struct abc{
    int x;
    char y;
};

union xyz{
    int p;
    char q;
};
int main() {
    struct abc a;
    union xyz b;
    printf("The address of struct member int x is %p \n",&a.x);
    printf("The address of struct member char y is %p \n \n",&a.y);
    printf("The address of union member int p is %p \n",&b.p);
    printf("The address of union member char p is %p \n",&b.q);
    return 0;
}