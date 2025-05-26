#include <stdio.h>

int main() {
    int i=5 , *ptr=&i ;
    // const int i=5 , *ptr=&i ;
    *ptr=40;//here * is use for dereference the pointer and make the variable i read or write 
    printf("The value of i= %d \n",i);
    return 0;
}