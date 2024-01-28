#include <stdio.h>

int main() {
    int num,org_num,count=0,cnt,reminder,result=0,mul=1;
    printf("Enter the number = ");
    scanf("%d",&num);
    
    org_num=num;
    
    while(num!=0){
        num=num/10;
        count++;
    }

    cnt=count;
    num=org_num;
    
    while(num!=0){
        reminder=num%10;
        
        while(count!=0){
            mul=mul*reminder;
            count--;
        }
        
        result=result+mul;
        // printf("%d \n",result);
        count=cnt;
        mul=1;
        num=num/10;
    }

    if( result== org_num){
        printf("the number is the armstrong number \n");
    }
    else{
        printf("the number is the not armstrong number \n");
    }
    return 0;
}