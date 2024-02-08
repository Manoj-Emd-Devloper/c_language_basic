#include <stdio.h>

int main() {
    char s[]="Hello world";
    printf("The string is : %.5s \n",s);// %.ns, where the n is use for print only number of character
    printf("The string is : %6.5s \n",s);// %m.ns ,where the m is use for to denote size of field

    return 0;
}