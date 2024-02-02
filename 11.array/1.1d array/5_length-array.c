//wap for find the length of array
#include <stdio.h>

int main() {
    int arr[]={10,20,30,4,5,9,4,5,6,7,5,1,23,4,5,67,9,9,1,34,6,79,
    126,46,455,144,52,4,5,44,514,45,14,2,15,42,55,54,5,54,6,65,6565,64,54,64,};
    int var;
    var = sizeof(arr)/sizeof(arr[0]);
    printf("The length of array is = %d \n",var);
    return 0;
}