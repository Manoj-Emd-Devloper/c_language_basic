#include <stdio.h>

int main() {
    int a[]={50,20,1,5,5,70};
    int sum=0,*p;
    //use the array name as a pointer which point to the first element of array 
    for(p=a;p<=a+5;p++){
        sum+=*p;
    }
    printf("The sum of the is = %d \n",sum);
    return 0;
}