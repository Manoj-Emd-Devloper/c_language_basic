#include <stdio.h>
#include <errno.h>//header file of error function

int main() {
    perror("Error found");//used for to print the error
    printf("Error No = %d \n",errno);//used for show which type of error is occur by return value
    return 0;
}