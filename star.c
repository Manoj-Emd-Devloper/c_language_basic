#include<stdio.h>

int main(){
    int row=4,col=4;
    for(int i=0; i<=row; i++){
        for(int j=0;j<=col;j++){
            if(j<=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
            }
    return 0;
}