#include <stdio.h>

int main() {
    int i=-5;
    while(i<=5){
        if(i>=0)
            break;
        else{
            i++;
            continue;
        }
        printf("hello \n");

    }
    return 0;
}