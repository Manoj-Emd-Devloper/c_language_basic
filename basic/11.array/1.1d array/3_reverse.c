#include <stdio.h>
#define N 5
int main() {
    int arr[N];

    for(int i=0 ; i<N ;i++){
        printf("Enter the value at index %d =",i);
        scanf("%d",&arr[i]);
    }

    //original order
    printf("The original order of array is: \n");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    //reverse order
    printf("The reverse order of array is: \n");
    for(int i=(N-1);i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}