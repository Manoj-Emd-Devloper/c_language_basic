#include <stdio.h>

int main() {
    int a;
    printf("Enter the number of a =");
    scanf("%d",&a);
    
    if(a<10)
        printf("a is less than 10 \n");

    else if(a<20)
     printf("a is less than 20 \n");
    
    else if(a==30)
        printf("a is equal to 30 \n");
    
    else
        printf("a is greater than 20 and not equal to 30");
    return 0;
}