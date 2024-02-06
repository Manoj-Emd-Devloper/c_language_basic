#include <stdio.h>

int main() {
    int a[2][3]={
                {1,2,3},
                {4,5,6}
                };
    int *p;
    printf("The two dimensional array is : \n");
    //by using pointer we can print the 2d array in one loop
    for(p=&a[0][0]; p<=&a[1][2] ; p++){
    printf("%d ",*(p));
    }
    return 0;
}