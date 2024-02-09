#include <stdio.h>

enum var { x=20 , y=50 , z , a=10 };
int main() {

    printf(" a=%d , x=%d , z=%d ,y=%d \n" , a,x,z,y);// number=51 ,in enum z is assign value 51 by compiler to take previous name value and adding +1 
    return 0;
}