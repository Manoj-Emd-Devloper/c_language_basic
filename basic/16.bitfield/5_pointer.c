//we cannot take address of bit-field. if we do then compiler show :
// error: cannot take address of bit-field 'x'
#include <stdio.h>

typedef struct{
    unsigned int x : 3;
    unsigned int y : 4;
}alpha;

int main() {
    alpha var;
    int *p1 = &var.x;
    int *p2= &var.y;

    printf("p1 = %p , p2 = %p \n",p1,p2);
    return 0;
}

//Also we cannot declare bit field member with type of array

/*
example : typedef struct{
    unsigned int x[4] : 3; //illegal
}alpha;

*/