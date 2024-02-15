//calloc function used for dynamic allocate multiple block of memory
#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter number of integer : ");
    scanf("%d",&n);
    int *p = (int *) calloc(n,sizeof(int));//take two argument which is number of block and size of each block
    if(p==NULL){
        printf("memory not available ! \n");
        exit(1);
    }
    for(int i=0 ; i<n ; i++){
        printf("Enter the integer %d : ",i);
        scanf("%d", p+i);
    }
    printf("\n");
    for(int i=0 ; i<n ; i++){
        printf("The integer %d is = %d \n" , i, *(p+i));
    }
    free(p);
    p = NULL;//after deallocating pointer become dangling. so assign it null.
    return 0;
}