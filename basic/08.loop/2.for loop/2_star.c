#include<stdio.h>

int main(){
    int row,col;
    printf("Enter the number row = ");
    scanf("%d",&row);
    printf("Enter the number col = ");
    scanf("%d",&col);

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
    
    for (int i=row;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}