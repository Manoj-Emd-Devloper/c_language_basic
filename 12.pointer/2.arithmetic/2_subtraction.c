#include <stdio.h>

int main() {
    int arr1[5]={10,20,50,60,4};
    int arr2[5]={30,20,50,60,4};
    int *p=&arr1[3];
    int *q=&arr2[5];
    printf("The subtraction of poiter is = %d \n",q-p);// two different pointer from different array perform subtraction then result is get undefined
    return 0;
}