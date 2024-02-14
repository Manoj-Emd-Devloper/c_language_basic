#include <stdio.h>
//extern is used to tell compiler find out the variable out of the present scope
extern int a; //here is declaration of variable which is out of this scope 
int main() {
    printf("a = %d \n" ,a);
    return 0;
}

//we can declare a same variable many time. but can't define same varible again.
//for declare the property of variable tell to compiler
//Example:- int a; or extern int a;
//in defination the variable is to take some memory
//Example:- int a = 10 ; or extern int a = 9;