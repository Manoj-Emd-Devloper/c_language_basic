#include <stdio.h>

int main() {
    const int var = 40;//make variable as constant to there scope.
    var = 50;
    printf("var = %d \n" , var);
    return 0;
}
//output : 
//error: assignment of read-only variable 'var'

//by using pointer we can chage the value of const variable