/*tail recursive :- recusion are the last thing of function and there is no need to keep previous state at return*/
#include<stdio.h>

void fun(int);

int n=3;

int main(){
    fun(n);
}

void fun(int a){
    if(a==0){
        return;
    }
    printf("%d ",a);
    return fun(a-1);
}

