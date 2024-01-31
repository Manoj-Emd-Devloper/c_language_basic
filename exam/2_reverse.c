#include <stdio.h>

int main() {
    int num,org_num,rem,count=0;
    printf("Enter the number =");
    scanf("%d",&num);
    org_num=num;
    while(num!=0){
        num=num/10;
        count++;
    }
    printf("count=%d \n",count);
    
    num=org_num;
    for (int i=1;i<=count;i++){
        rem=num%10;
        printf("%d",rem);
        num=num/10;
    }

    return 0;
}