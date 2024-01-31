/*non-tail recursive :- recusion are the not last thing of function 
and after return back there something to be evaluated*/

#include<stdio.h>

int fun(int);

int main(){
    printf("nontail recursion result is =%d ",fun(8));
}

int fun(int a){
    if(a==1)
        return 0;
    else
        return 1+fun(a/2);
}

