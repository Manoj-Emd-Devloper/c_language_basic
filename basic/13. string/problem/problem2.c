#include <stdio.h>

int main() {
    char s[] = "GATE2011";
    char *p = s;
    printf("The adresses of p = %p , value at p[3] = %c , valaue at p[1] = %c \n" , p , p[3] , p[1]);
    printf("output = %s \n", p + p[3] - p[1]);
    // 0064FEC3 + E - A = 0064FEC3 + 69 - 65 = 0064FEC7
    return 0;
}