#include <stdio.h>

int main() {
    // as a separator comma is used
    int a = 3 ,b = 4, c= 5;
    printf("%d %d %d \n",a,b,c);
    
    //as a operator comma is used and it's evaluated the right most operand first   
    int d = (3,4,5);
    printf("%d \n",d);
    //or
    int var=((printf("%s \n","HELLO")),5);

    //comma operator has the least precedence than other operator in c program. And the () bracket has more precedence
    int pre;
    pre = 3,4,5; // = has more precedence than ,
    printf("pre=%d \n",pre);
    return 0;
}