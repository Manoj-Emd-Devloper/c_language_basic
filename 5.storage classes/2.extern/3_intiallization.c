#include <stdio.h>
extern int a = 5; //extern variable are intiallized and it's define. For that the memory is allocated to this variable.
int main() {
    printf("a = %d \n",a);
    return 0;
}