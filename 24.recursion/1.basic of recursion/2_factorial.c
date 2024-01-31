#include<stdio.h>

int factorial(int n);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    int result = factorial(num);
    
    printf("Factorial of a %d is %d\n",num,result);
    return 0;
}

int factorial(int n){
    if(n==1){
    return 1;
    }
    return n * factorial(n-1);
}