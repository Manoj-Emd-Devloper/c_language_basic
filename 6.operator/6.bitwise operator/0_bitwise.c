#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the number a = ");
    scanf("%d",&a);
    printf("Enter the number b = ");
    scanf("%d",&b);

    // difference between the logical and bitwise operator
    if(a&b){
        printf("result of a&b is true \n");
    }

    if(a&&b){
        printf("result of a&&b is true \n"); //a&&b = (true && true) =true 
    }
    return 0;
}