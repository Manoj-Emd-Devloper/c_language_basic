#include <stdio.h>

int main() {
    int arr[]={50,20,1,5,5,70};
    int sum=0,*p;
    for(p=&arr[0];p<=&arr[5];p++){
        sum+=*p;
    }
    printf("The sum of the is = %d \n",sum);
    return 0;
}