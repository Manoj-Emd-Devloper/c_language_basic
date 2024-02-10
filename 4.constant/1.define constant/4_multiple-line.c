//wap define macros with codition like greter than or less than
#include <stdio.h>
#define greater(X,Y) if(X>Y) \
                        printf("The %d > %d ", X , Y); \
                    else \
                        printf("The %d < %d", X , Y);
// '\' use in macros for multiple line.
int main() { 
    int a,b;
    printf("Enter the two number : ");
    scanf("%d %d", &a, &b);
    greater(a,b);
    return 0;
}