#include<stdio.h>

int main(){
    char arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value at index %d \n",i);
        scanf("%c",&arr[i]);
        getchar();
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("The value at index %d is %c \n", i, arr[i]);
    }
    
    return 0;
} 