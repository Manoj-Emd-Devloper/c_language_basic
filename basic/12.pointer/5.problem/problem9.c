#include <stdio.h>
int fun(int x,int *y,int **z);
int main() {
    int c,*b,**a;
    c=4,b=&c,a=&b;
    printf("The address of c=%x, b=%p and a=%p \n",&c,b,a);
    printf("The return value is = %d \n",fun(c,b,a));
    return 0;
}

int fun(int x,int *y,int **z){
    int p,q;
    **z +=1;
    q=**z;
    *y +=2;
    p=*y;
    x +=3;
    return x+p+q;
}