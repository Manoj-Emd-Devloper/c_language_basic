#include <stdio.h>
void callbackfun(void){
    printf("This is a callback function \r\n");
}

void myfun(void (*p)(void)){
    (*p)();
}
int main() {
    printf("Use of function pointer by callbackfun \r\n");
    myfun(callbackfun);
    return 0;
}