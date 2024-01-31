#include <stdio.h>

int main() {
    double base,result=1;
    int exponent;
    int expo;
    printf("Enter the base =");
    scanf("%lf",&base);
    printf("Enter the exponent =");
    scanf("%d",&exponent);
    
    expo=exponent;

    if(exponent > 0){
        while(exponent != 0){
            result = result * base;
            exponent--;
        }
    }

    else{
        while(exponent != 0){
            result = result * (1.0/base);
            exponent++;
        }
    }

    printf("the power of base %.0lf with the exponent %d is = %.9lf \n",base,expo,result);
    return 0;
}