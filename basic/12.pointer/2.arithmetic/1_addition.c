#include <stdio.h>
#define len 5
int main() {
    int arr[len]={10,20,5,6,7};
    int *ptr=&arr[2];
    printf("The address of pointer and arr[2] is = %p \n",ptr);

    ptr=ptr+2;
    printf("The address of pointer is = %p \n",ptr);
    printf("The value array by pointer addition is = %d \n",*ptr);
    return 0;
}