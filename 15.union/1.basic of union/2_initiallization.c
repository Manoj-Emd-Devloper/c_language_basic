#include <stdio.h>

typedef union{
    int x;
    char y;
}abc_t;

int main() {
    abc_t a ;
    a.x = 65 ;//variable intiallization done by (.) operator

    printf("The value of a is = %d \n", sizeof(a)); //it's consist size of maximum member
    
    printf("The value of a is = %d \n", a.x);

    printf("The value of a is = %c \n", a.y); // a.y = 'A' , because the union member are share there memory  
    
    return 0;
}