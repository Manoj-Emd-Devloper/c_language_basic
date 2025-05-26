//wap for array which is consist different type of data
#include <stdio.h>
//use union for different datatype and save the memory.And the array accessing a value at a time so in stucture memory is wastage.
typedef union{
    char a;
    int b;
    double c;
}data;

int main() {
    data a[5];
    a[0].a = 'A';
    a[1].b = 25;
    a[2].c = 3.14568;
    a[4].a = 'B';

    printf("The size of array is = %d \n", sizeof(a));
    printf("a[0] = %c \n" , a[0].a);
    printf("a[1] = %d \n" , a[1].b);
    printf("a[2] = %f \n" , a[2].c);
    printf("a[4] = %c \n" , a[4].a);
    return 0;
}