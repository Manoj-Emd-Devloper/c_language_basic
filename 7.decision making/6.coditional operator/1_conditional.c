#include <stdio.h>

int main() {
    int var;
    int flag=0;

    var= flag == 0 ? 25 : -25;
    printf("when the flag is equal to 0 then var = %d \n",var);

    flag=1;
    var= flag == 0 ? 25 : -25;
    printf("when the flag is not equal to 0 then var = %d \n",var);

    return 0;
}