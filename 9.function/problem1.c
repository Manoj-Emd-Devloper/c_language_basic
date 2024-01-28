#include <stdio.h>
int fun(int);
int main() {
    int var;
    printf("Enter the value for right shift opearation count: ");
    scanf("%d",&var);
    printf("count = %d\n",fun(var));
    return 0;
}

int fun(int num){
    int count=0;
    while(num){
        count++;
        num >>= 1;
    }
    return count;
}