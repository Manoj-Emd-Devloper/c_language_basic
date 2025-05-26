#include <stdio.h>

typedef union{
    int x;
    char y;
}abc_t;

int main() {
    abc_t var;
    var.x = 90;
    abc_t *ptr = &var;
    printf("The value of var is %d \n", ptr->x);// in pointer the (->) operator use for accessing the member of union
    printf("The value of var is %c \n", ptr->y);
    return 0;
}