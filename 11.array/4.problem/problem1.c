#include <stdio.h>

int main() {
    int sum=0;
    int a[5][5]={
                 {8,3,9,0,10},
                 {3,5,17,1,1},
                 {2,8,6,23,1},
                 {15,7,3,2,9},
                 {6,14,2,6,0}
                 };
    printf("The sum of row is = \n");
    for(int i=0; i<5 ;i++){
        for(int j=0 ; j<5 ;j++){
            sum=sum+a[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }


    printf("\nThe sum of col is = \n");
    for(int j=0 ; j<5 ;j++){
        for(int i=0; i<5 ;i++){
            sum=sum+a[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }

    return 0;
}