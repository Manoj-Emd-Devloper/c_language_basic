//wap for check number is perfect of not
#include <stdio.h>

int main() {
    int n,rem,sum=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    /*n=6 -> 6%1==0 ,6%2==0, 6%3==0, 6%4!=0, 6%5!=0 */
    for(int i=1;i<n;i++){
        rem=n%i;
        if(rem==0){
            sum=sum+i;
        }
    }

    if(sum==n)
        printf("The %d is a perfect number \n",n);//number divisible by other number is addition is equal to original value
    else
        printf("The %d is a not a perfect number \n",n);
    return 0;
}