#include <stdio.h>

int main() {
    int arr[]={5,16,7,89,45,32,23,10};
    int *p=&arr[1],*q=&arr[5];
    printf("p = %p \n", p);//The address of p is 0064FEAC and the next address forward to p is +4 byte
    printf("q = %p \n", q);//The address of q is 0064FEBC
    printf("(q-p) = %p \n \n",q-p);
    printf("*(p+3) = %d \n",*(p+3));
    printf("*(q-3) = %d \n",*(q-3));
    printf("(q-p) = %d \n",q-p);
    printf("(p<q) = %d \n",p<q);
    printf("(*p < *q) = %d \n",*p<*q);
    return 0;
}