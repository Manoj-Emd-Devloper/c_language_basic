#include <stdio.h>

int main() {
    int x,a=0,b=1,result=0;
    printf("Enter the x number term:");
    scanf("%d",&x);

    printf("The fibonaci series: ");
    for(int i=1;i<=x;i++){
        printf("%d ",a);
        result=a+b;
        a=b;
        b=result;
    }
    return 0;
}