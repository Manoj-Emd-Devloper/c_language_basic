#include <stdio.h>

int main() {
    int a[2][2][3]={
                    {{1,2,3},{4,5,6}},
                    {{7,8,9},{10,11,12}}
                   };
    printf("The 3d array is : \n");
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ;j++){
            for(int k=0; k<3; k++){
            printf("%d ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}