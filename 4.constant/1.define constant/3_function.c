//wap to use macros like function
#include <stdio.h>
#define add(X,Y) X+Y
int main() {
    int a,b;
    printf("Enter the two number : ");
    scanf("%d %d", &a, &b);
    printf("The addition is = %d \n", add(a,b));
    return 0;
}