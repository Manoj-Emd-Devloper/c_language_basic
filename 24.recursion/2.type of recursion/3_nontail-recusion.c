/*non-tail recursive :- recusion are the not last thing of function 
and after return back there something to be evaluated*/

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
    fun(a-1);
    printf("%d ",a);
}

