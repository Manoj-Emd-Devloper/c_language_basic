#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of block = ");
    scanf("%d",&n);
    int *ptr = (int *)calloc(n,sizeof(int));
    int *ptr1 = (void *)malloc(n*sizeof(int));
    printf("sizeof ptr = %d \n",*ptr);//intiallized by 0 value in my machine
    printf("sizeof ptr = %d \n",*ptr1);//intiallized by garbage value in my machine
    return 0;
}