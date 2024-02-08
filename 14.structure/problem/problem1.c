#include <stdio.h>
typedef struct {
    char x,y,z;
}var;

int main() {
    var p = { '1' , '0' , 'a' + 2 };
    var *q = &p;
    printf("The answer of following is %c and %c \n",*( (char *) q+1) , *( (char *) q+2) );
    return 0;
}