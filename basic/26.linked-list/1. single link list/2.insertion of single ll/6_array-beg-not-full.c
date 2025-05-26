//wap in which data is added to the beginning of array 
#include <stdio.h>

int add_beg(int a[],int n, int data);

int main() {
    int arr[10];
    int n,data;
    printf("Enter the number of element upto 10: ");
    scanf("%d",&n);
    printf("Enter the numbers upto %d: ",n);
    for(int i=0 ; i<n ; i++)
        scanf("%d",&arr[i]);
    printf("Enter the number add to the beginning: ");
    scanf("%d",&data);

    n = add_beg(arr,n,data);

    printf("After adding the data at the beginning the array is : ");
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

int add_beg(int a[],int n, int data){

    //To right shift the array
    for(int i=n-1 ; i>=0 ; i--){
        a[i+1] = a[i];
    }
    a[0] = data;//add the data to first the array
    return n+1;
}