#include <stdio.h>

int main() {
    int i=1;
    int *p=&i , *q;
    q=p;
    *q=5;
    printf(" i= %d \n",i);
    return 0;
}