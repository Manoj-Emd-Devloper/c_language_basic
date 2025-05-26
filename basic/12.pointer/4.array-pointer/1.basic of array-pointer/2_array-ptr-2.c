#include <stdio.h>

int main() {
    int a[]={10,2,0,5,4,6,8};
    int *p=a;//we can accessing the array addresses and assign to pointer but we can't do ++a because a contain only base address
    printf("The increment pointer value is= %d \n",*(++p));
    return 0;
}