//wap for check whether the digit in number are same or not
#include <stdio.h>

int main() {
    int seen[10]={0};
    int n,rem;
    printf("Enter the number = ");
    scanf("%d",&n);

    while(n>0){
        rem=n%10;
        if(seen[rem]==1)
            break;
        seen[rem]=1;
        n=n/10;
    }

    if(n>0)
        printf("The number has same digit");
    else
        printf("The number has not same");
    return 0;
}