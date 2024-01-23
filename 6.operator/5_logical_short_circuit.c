#include <stdio.h>

int main() {
    int a=5,b=6,bln;
    int c=b;

    //first condition true then the sencond codition is evaluated
    bln=(a<b) && (b++);
    printf("bln=%d \n",bln);
    printf("b=%d \n",b);
    printf("if first condition true then the sencond codition is evaluated in AND logical operator \n");

    //first condition false then the sencond codition is not evaluated
    b=c;
    bln=(a>c) && (b++);
    printf("\nbln=%d \n",bln);
    printf("b=%d \n",b);
    printf("if first condition false then the sencond codition is not evaluated in AND logical operator \n");

    //first condition true then the sencond codition is not evaluated
    b=c;
    bln=(a<b) || (b++);
    printf("\nbln=%d \n",bln);
    printf("b=%d \n",b);
    printf("if first condition true then the sencond codition is not evaluated in OR logical operator \n");

    //first condition false then the sencond codition is not evaluated
    b=c;
    bln=(a>b) || !(b++);
    printf("\nbln=%d \n",bln);
    printf("b=%d \n",b);
    printf("if first condition false then the sencond codition is not evaluated in OR logical operator \n");
    
    return 0;
}