#include <stdio.h>

int main() {
    int a=5;
    //And logical operation
    if(a==5 && a!=6 && a<=56 && a>4){
        printf("All the condition are true then it's return value 1 in AND logical operator \n");
    }
    else{
        printf("It's return value 0 \n");
    }

    //Or logical operation
    if(a==6 || a!=5 || a<=56 || a>6){
        printf("One condition are True then it's return value 1 in OR logical operator \n");
    }
    else{
        printf("It's return value 0 for all the the codition are false \n");
    }

    //Not logical operation
    if(!(a==6)){
        printf("If codition is false then return value 1 in NOT logical operator \n");
    }
    else{
        printf("It's return 0 for true condition \n");
    }
    getchar();
    return 0;
}