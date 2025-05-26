#include <stdio.h>

int main() {
    int i=5;
    int *ptr = &i;//necessary to declare and intialized before use pointer
    printf("The pointer address is =  %p \n",ptr);
    return 0;
}