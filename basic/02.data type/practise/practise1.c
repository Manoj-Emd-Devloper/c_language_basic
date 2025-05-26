//wap for know the range of long long int
#include <stdio.h>
#include <limits.h>

int main() {
    long long int var1 = LONG_LONG_MIN;
    long long int var2 = LONG_LONG_MAX;
    unsigned long long int var3 = 0;
    unsigned long long int var4 = ULONG_LONG_MAX;
    printf("The range of signed long long int is from %lld to %lld \n", var1, var2 );
    printf("The range of unsigned long long int is from %llu to %llu \n", var3, var4 );

    return 0;
}