#include <stdio.h>

int main() {
    int n=0 , rows;
    printf("Enter the number of rows = ");
    scanf("%d",&rows);
    
    for(int i=1 ; i<=rows ; i++){
        for (int j=1 ; j<=i ; j++){
            n++;
            printf("%d ",n);
        }
        printf("\n");
    }
    return 0;
}