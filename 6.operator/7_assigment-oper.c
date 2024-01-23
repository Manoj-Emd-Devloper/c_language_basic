#include <stdio.h>

int main() {
    char a=7; //= is  assigment operator
    printf("value of a is = %d \n",a);
    
    //for the arithmetic assigment operator
    a+=10;
    printf("the addition value of a is = %d \n",a);
    a-=10;
    printf("the subtraction value of a is = %d \n",a);
    a*=5;
    printf("the multiplication value of a is = %d \n",a);
    a/=7;
    printf("the divison value of a is = %d \n",a);
    a%=5;
    printf("the modulus value of a is = %d \n",a);
    
    //for the AND assigment operator
    a&=1;
    printf("the AND assigment operator value of a is = %d \n",a);
    
    //for the OR assigment operator
    a|=2;
    printf("the OR assigment operator value of a is = %d  \n",a);
    
    //for the Left shift assigment operator
    a<<=2;
    printf("the Left shift assigment operator value of a is = %d  \n",a);
    
    //for the righy shift assigment operator
    a>>=3;
    printf("the right shift assigment operator value of a is= %d  \n",a);


    //for the XOR assigment operator
    a^=5;
    printf("T XOR and addition assigment operator value of a is= %d \n",a+=3);
    return 0;
}