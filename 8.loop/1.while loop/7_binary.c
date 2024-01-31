#include <stdio.h>

int main() {
    int binary;
    int decimal=0,weight=1,rem,num;
    printf("Enter the number in binary = ");
    scanf("%d",&binary);

    num=binary;

    while(binary != 0){
        rem=binary%10;
        decimal=decimal+rem*weight;
        binary=binary/10;
        weight=weight*2;
    }

    printf("The decimal number of %d is %d",num,decimal);
    return 0;
}