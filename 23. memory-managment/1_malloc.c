//malloc function used for dynamic memory allocatation of single large memory with specified size 
#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter number of integer : ");
    scanf("%d",&n);
    int *p = (int *) malloc(n * sizeof(int));//take one argument which is size of memory in byte
    if(p==NULL){
        printf("memory not available ! \n");
        exit(1);
    }
    for(int i=0 ; i<n ; i++){
        printf("Enter the integer %d : ",i);
        scanf("%d", p+i);
    }
    for(int i=0 ; i<n ; i++){
        printf("The integer %d is = %d \n" , i, *(p+i));
    }
    free(p);//realeasing memory allocated 
    p = NULL;//after deallocating pointer become dangling. so assign it null.
    return 0;
}
//malloc is allocate the memory but it's doesn't know which type of data is to store in that memory.
//malloc return a void pointer for that we should be do the typecasting to appeoprite data i.e (int *)