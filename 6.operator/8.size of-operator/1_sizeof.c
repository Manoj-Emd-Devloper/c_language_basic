#include <stdio.h>

int main(){
    char a;
    unsigned char a1;
    short b;
    unsigned short b1;
    int c;
    unsigned int c1;
    long d;
    unsigned long d1;

    printf("The memory size of char is %d byte\n",sizeof(a));
    printf("The memory size of unsigned char is %d byte\n",sizeof(a1));
    printf("The memory size of short is %d byte\n",sizeof(b));
    printf("The memory size of unsigned short is %d byte\n",sizeof(b1));
    printf("The memory size of int is %d byte\n",sizeof(c));
    printf("The memory size of unsigned int is %d byte\n",sizeof(c1));
    printf("The memory size of long is %d byte\n",sizeof(d));
    printf("The memory size of unsigned long is %d byte\n",sizeof(d1));
    return 0;
}