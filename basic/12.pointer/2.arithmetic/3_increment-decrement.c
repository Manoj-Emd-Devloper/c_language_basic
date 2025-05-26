#include <stdio.h>

int main() {
    
    {//post increment in the pointer of array
    int arr1[5]={10,20,50,60,4};
    int *p=&arr1[2];
    printf("The value of array is when post increment of pointer happen = %d \n",*(p++));
    printf("The value of array = %d \n \n",*p);
    }
    
    {
    //post increment in the pointer of array
    int arr1[5]={10,20,50,60,4};
    int *p=&arr1[1];
    printf("The value of array is when pre increment of pointer happen = %d \n",*(++p));
    printf("The value of array = %d \n \n",*p);
    }
    
    {
    //post increment in the pointer of array
    int arr1[5]={10,20,50,60,4};
    int *p=&arr1[2];
    printf("The value of array = %d \n",*p);
    printf("The value of array is when pre decrement of pointer happen = %d \n",*(--p));
    printf("The value of array is when post decrement of pointer happen = %d \n",*(p--));
    }

    return 0;
}