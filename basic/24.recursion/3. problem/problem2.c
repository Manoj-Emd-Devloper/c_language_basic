//in below program if fun(6) then how many time a function is call
#include <stdio.h>
int count=0;
void fun(int);
int main() {
    char i=6;
    fun(i);
    printf("count=%d \n",count);
    return 0;
}


void fun(int n){
count++;
if(n<1) return;
fun(n-1);
fun(n-3);
printf("the value of n is %d\n",n);
}