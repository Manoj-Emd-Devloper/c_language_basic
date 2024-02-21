//wap in which the array is full and insert new value at end of array
#include <stdio.h>
#define n 3
int add_to_end(int a[], int b[], int freepos, int size, int data);

int main() {
    int a[n];
    int size,freepos,data;

    printf("The number of array element is n = %d \n",n);
    printf("Enter the numbers :");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to add the end of node :");
    scanf("%d",&data);

    size = sizeof(a)/sizeof(a[0]);
    freepos = n;
    
    if(n == size){
        int b[n+2];
        for(int i=0 ; i<size ; i++)
            b[i] = a[i];
        freepos = add_to_end(a, b, freepos, size, data);
        for(int i=0 ; i<freepos ; i++)
            printf("b[%d] = %d \n", i, b[i]);
    }

    return 0;
}

int add_to_end(int a[], int b[], int freepos , int size , int data){
    b[freepos] = data;
    freepos++;
    return freepos;
}