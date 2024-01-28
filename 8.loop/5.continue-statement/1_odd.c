#include <stdio.h>

int main() {
    int n = 2;
    for(int i=1;i<=20;i++){ 
        if(n==i){
            n = n + 2;
            continue;
        }
        printf("%d \n",i);
    }

    return 0;
}