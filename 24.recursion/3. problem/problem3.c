//for any number of n how many time star will printed
/*answer:- for n=2,star=3
           for n=3,star=6
           for n=k,star=(k(k+1))/2
    */
#include <stdio.h>
void fun1(int);
int main() {
    int n;
    printf("Enter the number n = ");
    scanf("%d",&n);

    fun1(n);
    printf("\n");
    return 0;
}

void fun1(int n){
    int i;
    if(n>1)
        fun1(n-1);
    for(i=0 ; i<n ; i++){
        printf("*");
    }
}