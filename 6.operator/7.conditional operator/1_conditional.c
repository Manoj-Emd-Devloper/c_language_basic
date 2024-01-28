#include <stdio.h>

int main() {
    int var =45,num;
    int var2=40;
    num =sizeof(var)? ( (var2>30) ? ((var=45) ? 'A': 0 ) : 0 ) : 0 ;
    printf("%d\n",num);
    return 0;
}