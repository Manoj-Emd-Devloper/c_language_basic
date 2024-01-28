#include <stdio.h>

int main() {
    
    int x,flag=0;
    printf("please enter a number: ");
    scanf("%d",&x);

    for(int i=1;i<=x;i++){
        if(x%i==0){
            flag++;
        }
    }

    if(flag==2)
        printf("%d is a prime number \n",x);
    else
        printf("%d is not a prime number \n",x);
    
    return 0;
}