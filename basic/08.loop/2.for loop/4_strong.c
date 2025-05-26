#include <stdio.h>

int main() {
    int num,org_num,rem=0,fact=1,result=0,mul=1;
    printf("Enter the number = ");
    scanf("%d",&num);
    
    org_num=num;
    
    while(num!=0){
        rem=num%10;
        
        for(int i=1;i<=rem;i++){
        fact = fact * i;
        }

        result = result +fact;
        // printf("%d \n",result);
        
        num=num/10;
        fact=1;

    }
    if( result== org_num){
        printf("the number is the strong number \n");
    }
    else{
        printf("the number is the not strong number \n");
    }
    return 0;
}