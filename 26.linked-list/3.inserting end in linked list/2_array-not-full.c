//wap in which the array is not full and insert new value at end of array

#include <stdio.h>

int add_to_end(int a[], int n, int data);

int main() {
    int a[10];
    int freepos , n , data;

    printf("Enter the number of element upto 10: ");
    scanf("%d", &n);

    printf("Enter the numbers upto %d: ",n);
    for(int i=0 ; i<n ; i++)
        scanf("%d",&a[i]);
    
    printf("Enter the number to add the end of node :");
    scanf("%d",&data);

    freepos = n;//last element value store in freepos which is use for next index of array
    freepos = add_to_end(a , freepos, data);

    for(int i=0 ; i<freepos ;i++){
        printf("a[%d] = %d \n", i, a[i]);
    }

    return 0;
}

int add_to_end(int a[], int freepos, int data){
    a[freepos] = data;
    freepos++;
    return freepos;
}