#include <stdio.h>

struct padding{
    char x;
    int y;
    char z;
};

int main() {
    struct padding var;
    printf("size of variable is = %d \n", sizeof(var));
    return 0;
}
/*memory is wasted due to padding And Take one full cpu cycle.
1. Padding: When you define a structure in C, the compiler may insert additional bytes between 
structure members to ensure that each member is aligned properly in memory. This process is 
called padding.
2.Data Alignment: CPUs are typically optimized for accessing data at certain memory addresses, 
often multiples of their word size (e.g., 4 bytes or 8 bytes). Misaligned data accesses can lead to 
performance penalties or even errors on some architectures.*/
