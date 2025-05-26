#include <stdio.h>
#define N 5
int main() {
    int a[N];
    int *p;

    printf("Enter 5 Element Array =\n");
    for( p=a ; p<=a+N-1 ; p++){
        scanf("%d",p);
    }
    printf("you entered element are : \n");
    for(int i=0; i<N;i++){
        printf("%d ",a[i]);
    }
    
    printf("\nThe reverse of array is :\n");
    for(p=a+N-1;p>=a;p--){
    printf("%d \n",*p);
    }
    return 0;
}