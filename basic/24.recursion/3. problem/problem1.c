#include<stdio.h>

int fun(int);

int main(){
    printf("fun return is %d\n",fun(8));
    return 0;
}

int fun(int n){
    if(!(n%2==0))
        return 1;
    if(n==0)
        return 1;
    else
        return 7 + fun(n-2) ;
}
