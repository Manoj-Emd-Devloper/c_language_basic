#include <stdio.h>
int fun();
int main() {
    for(fun();fun();fun())
    printf("%d\n",fun());
    return 0;
}
/* 1.for(16,15,13)   //16->15   ->13
    printf(14)             |->14|
   2.for(16,12,10)
    printf(11)
   3.for(16,9,7)
    printf(8)*/

int fun(){
    static int a=16;
    return a--;
}