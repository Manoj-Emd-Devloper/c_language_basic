#include <stdio.h>

int main() {
    unsigned i = 1; //compiler take i to int by default
    int j = -4;
    printf("(i+j) = %u \n", i+j);
    return 0;
}
//output = 4294967293  (depend on machine)
//(i+j)= -3 , and %u take positive value so it's do 2's complment of (-3)
//which is decimal answer is = 4294967293 (depend on machine)