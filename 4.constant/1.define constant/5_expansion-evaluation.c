//wap to use macros like function
#include <stdio.h>
#define add(X,Y) X+Y
int main() {
    int a,b;
    printf("Enter the two number : ");
    scanf("%d %d", &a, &b);
    printf("The addition is = %d \n", 5 * add(a,b));
    return 0;
}
//for input add(4,3) the output is 23
//first here expansion the add(4,3) -> 4+3 
//then evaluate like 5 * 4 + 3 = 20 + 3 = 23