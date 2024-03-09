#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the number a : ");
    scanf("%d", &a);
    printf("Enter the number b : ");
    scanf("%d", &b);
    printf("The addition of a + b = %d \n", a + b);
    return 0;
}

//scanf function use for to take integer , character , string , etc . input from the user
//in scanf %d is use for which type of data is inputed.
// ampersand (&) is use for give the address of that variable memory location where the inputed value is stored