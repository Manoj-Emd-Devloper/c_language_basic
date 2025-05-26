#include <stdio.h>
int *mid_(int arr[],int *n);
int main() {
    int a[] = {10,50,60,80,70};
    int len = sizeof(a)/sizeof(a[0]);
    int *mid= mid_(a,&len);
    printf("The middle index value is = %d \n", *mid);
    return 0;
}

int *mid_(int arr[],int *n){
    return &arr[*n/2];
}   