#include <stdio.h>
char fun(char a);//function declaration or prototype
int main() {
    int var;
    printf("Enter the character : ");
    scanf("%c",&var);
    var=fun(var);
    printf("the charter is return by function is %c\n",var);
    return 0;
}

char fun(char a){ //function defination
    return a;
}