#include <stdio.h>

int main() {
    int a,i;
    printf("Enter the number for range =");
    scanf("%d",&a);
    printf("The range even number from 0 to %d is, \n",a);

    for(int i=0; i<=a ;i++)
    {   
        if(i%2==0){
        printf("%d \n",i);
        }
    }
    return 0;
}