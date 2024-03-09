#include <stdio.h>

int main() {
    int a,i;
    printf("Enter the number for multiplication Table =");
    scanf("%d",&a);
    printf("The multiplication of %d ranging between 0-10 is \n",a);
    
    i=1;
    while(i<=10){
        printf("%d x %d = %d \n",a, i, a*i);
        i++;
    }
    return 0;
}