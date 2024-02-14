#include <stdio.h>//used for perform input or output operation using the function like printf(),scanf(),etcc...
#include <math.h>//gives a feature like squre root , power of value to do mathmatical operation.
#include <string.h>
int main() {
    char s1[10]="1234";
    char s2[10]="Hello";
    long int res;

    //by using math.h file. we can find power of integer number
    res = pow(2,3);
    printf("The result of 2^3 is = %ld \n",res);

    //by using string.h file. we can copy the string
    printf("The before strcpy string at s1 is  = %s \n",s1);
    strcpy(s1,s2);
    printf("The after strcpy string at s1 is  = %s \n",s1);
    return 0;
}