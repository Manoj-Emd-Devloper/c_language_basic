//wap program that find the max and min value in the array
#include <stdio.h>
int fun(int arr[], int n , int *max, int *min);
int main() {
    int a[]={10,50,80,70,30};
    int len = sizeof(a)/sizeof(a[0]);
    int max,min;
    fun(a,len,&max,&min);
    printf("The maximum value = %d and minimum value = %d \n",max,min);
    return 0;
}

int fun(int arr[], int n , int *max, int *min){
    *max=*min=arr[0];
    for(int i=1 ; i<n ; i++){
        if(arr[i]>*max){
            *max=arr[i];
        }
        else if(arr[i]<*min){
            *min=arr[i];
        }
    }
}