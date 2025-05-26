#include<stdio.h>

int fun(int);

int main(){
    int num = 3 ;
    
    printf("fun return is %d\n",fun(num));
    return 0;
}

int fun(int n){
    if(n==1)
        return 1;
    else
        return 1+fun(n-1);
}

/*  fun(3) -> 1+fun(2)
    fun(2) -> 1+fun(1)
    fun(1) -> 1+fun(0)
    fun(0) -> 1   => fun(3)->4*/