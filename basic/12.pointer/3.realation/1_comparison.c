#include <stdio.h>

int main() {
    int arr[5]={5,6,7,2,3};
    int *p=&arr[3];
    int *q=&arr[1];
    printf("(p<=q) = %d \n",p<=q);
    printf("(p>=q) = %d \n",p>=q);
    q=&arr[3];
    printf("(p==q) = %d \n",p==q);
    return 0;
}