#include <stdio.h>
#define N 6 //Advantage of macros in array we can easily change length of array by define without modify to length of array in code

int main() {
    int arr[N];
    for(int i=0 ; i<N ;i++){
        printf("Enter the value at index %d =",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<N ;i++){
        printf("The value at index %d is %d \n",i,arr[i]);
    }
    return 0;
}