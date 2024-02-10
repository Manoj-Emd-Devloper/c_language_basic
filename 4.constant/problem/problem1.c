#include <stdio.h>

int main() {
    int var = 052; //052 is a octal number. the octal number show as 0_Num; 
    printf("var = %d in decimal\n" ,var);
    printf("var = %o in octal\n" ,var);
    return 0;
}

//convert 052 to decimal
// 052 = (5 * 8^1) + (2 * 8^0) = 40+2 = 42 in decimal