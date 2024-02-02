#include <stdio.h>
#define Max 50

int main() {
        int a[Max][Max] , b[Max][Max] , product[Max][Max];
        int arow,acol, brow,bcol;
        int sum=0;

        printf("Enter number of row and coloum in matrix a = ");
        scanf("%d %d",&arow,&acol);

    
        printf("Enter the row and coloum of matrix a: \n");
        for(int i=0 ; i<arow ; i++){
            for(int j=0 ; j<acol ;j++){
                scanf("%d",&a[i][j]);
            }
        }
    
        printf("Enter number of row and coloum in matrix b = ");
        scanf("%d %d",&brow,&bcol);
        
        if(brow!=acol)
            printf("the multiplication of those marix are not possible \n ");
        else{
        printf("Enter the row and coloum of matrix b: \n");
        for(int i=0 ; i<brow ; i++){
            for(int j=0 ; j< bcol ;j++){
                scanf("%d",&b[i][j]);
            }
        }
        }

        printf("The multiplication of these two matrix are : \n");
        for(int i=0 ; i<arow ; i++){
            for(int j=0 ; j<bcol ; j++){
                for(int k=0; k<brow ; k++){
                    sum = sum + a[i][k]*b[k][j];
                }
                 product[i][j]=sum;
                sum=0;
            }
        }
        
        for(int i=0; i<arow;i++){
            for(int j=0 ; j<bcol ;j++){
                printf("%d ",product[i][j]);
            }
            printf("\n");
        }
        return 0;
    }