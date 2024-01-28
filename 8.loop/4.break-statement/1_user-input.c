//write a program that allow to user to enter an integer until user don't enter 0 or negative value 
#include <stdio.h>

int main() {
    
    int a;
    printf("Enter the integer value=");
    scanf("%d",&a);
    printf("Enter the 0 or negative value for exit the loop \n");
    
    while(a!=0){
        if (a<0)
            break;
    
    printf("Enter the integer value=");
    scanf("%d",&a);
    printf("Enter the 0 or negative value for exit the loop \n");
    
    }
    
    printf("your are out of the loop \n");

    return 0;
}