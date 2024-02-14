#include <stdio.h>
#include "header.h"

int main() {
    int a,b,res;
    printf("Enter the number : ");
    scanf("%d %d",&a,&b);
    
    //used this fuction by include user defined header file
    res=sum(a,b);
    printf("The result is= \n");
    printf("%d",res);
    return 0;
}
