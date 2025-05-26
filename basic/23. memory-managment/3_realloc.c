//realloc is used to change the size of memory block without losing the data
#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter the interger:");
    scanf("%d",&n);
    
    int *p = (int *)malloc(n*sizeof(int));
    if(p==NULL){
            printf("The memory is not allocated ! \n");
            exit(1);
    }

    for(int i=0 ; i<n ; i++){
        printf("Enter the integer number %d : ",i);
        scanf("%d", p+i);
    }

    //memory allocating for two more integer
    if(n<=4){
        p=(int *)realloc(p, 4*sizeof(int));
        if(p==NULL){
            printf("The memory is not allocated ! \n");
            exit(1);
        }
    }

    for(int i=2 ; i<4 ; i++){
        printf("Enter the integer number %d : ",i);
        scanf("%d", p+i);
    }
    printf("\n");
    for (int i=0 ; i<4 ; i++){
        printf("The integer number of %d is = %d \n",i,*(p+i));
    }
    free(p);
    p = NULL;//after deallocating pointer become dangling. so assign it null.
    return 0;
}
//we may lose data if the size of realloc memory is less than malloc memory