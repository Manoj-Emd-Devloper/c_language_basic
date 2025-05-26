#include <stdio.h>
#include <stdlib.h>

int *input();

int main() {
    int sum =0;
    int *p = input();
    for(int i=0 ; i<4 ; i++){
        sum += (*(p+i));
    }

    printf("sum = %d",sum);
    free(p);
    p = NULL;
    return 0;
}

int *input(){
    int *p = (int *) malloc(4*sizeof(int));
    printf("Enter the four numbers: ");
    for(int i=0 ; i<4 ; i++){
        scanf("%d",p+i);
    }
    return p;
}