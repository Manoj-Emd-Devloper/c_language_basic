//How to declare a structure 
#include <stdio.h>
    struct{
        char *engine;
    }car1,car2;

int main(){
    car1.engine="DDis engine";
    car2.engine="Kappa dual engine";
    printf("The car 1 engine is %s \n",car1.engine);
    printf("The car 2 engine is %s \n",car2.engine);
    return 0;
}