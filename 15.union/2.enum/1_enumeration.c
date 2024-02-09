#include <stdio.h>
void fun();

//enum is used for assigned integral constal (Natural number) to name.
enum bool {False , True}; //in enum if we dont't assign value to name compiler auto assign value to name start from 0.

int main() {
    enum bool var ;
    var = True;
    printf("var = %d \n", var);
    fun();
    return 0;
}

void fun(){
    enum boolean {False , True} var; //we can declare enum in local scope. #define not.
    var = False;
    printf("var = %d \n", var);
}