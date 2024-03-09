#include <stdio.h>

unsigned long long int decimal_to_bin(int x)
{
    int rem = 0;
    unsigned long long int bin = 0;
    unsigned long long int base = 1;

    while (x != 0)
    {
        rem = x % 2;
        bin = bin + rem * base;
        base = base * 10;
        x = x / 2;
    }
    return bin;
}

int main()
{
    int num;
    unsigned long long result;
    printf("Enter the number = ");
    scanf("%d", &num);
    result = decimal_to_bin(num);
    printf("The binary of decimal number %d is = %lld \n", num, result);
    return 0;
}