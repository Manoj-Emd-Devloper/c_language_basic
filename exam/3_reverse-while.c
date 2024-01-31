#include <stdio.h>

int main() {
    int num,rem,count;
    printf("Enter the number =");
    scanf("%d",&num);
    printf("The reverse of number is = ");
    while(num !=0){
        rem=num%10;
        printf("%d",rem);
        num=num/10;
    }
    return 0;
}