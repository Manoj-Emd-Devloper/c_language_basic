#include <stdio.h>
void fun(char*);
int main() {
    char *i;
    printf("Enter the string : ");
    scanf("%s",i);
    fun(i);
    return 0;
}

void fun (char *a){
    if(*a && *a != ' '){
        fun(a+1);//recusion is ended then
        putchar(*a);//all the putchar executed reverse series
    }
}

//if the input is  ABCD EFGH 
//then the output is DCBA