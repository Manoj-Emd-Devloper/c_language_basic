#include <stdio.h>
#include<stdlib.h>
extern int increment();
// extern int count;
int main() {
    int value=0;
    int *b = &value;
    value = increment();
    printf("increment=%d \n",value);
    printf("address of value= %d \n",b);
    value = increment();
    printf("increment=%d \n",value);
    printf("address of value= %d \n",b);
    value = increment();
    printf("increment=%d \n",value);
    printf("address of value= %d \n",b);
    return 0;
}