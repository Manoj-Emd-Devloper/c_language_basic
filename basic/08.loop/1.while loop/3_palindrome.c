#include <stdio.h>

int main() {
    int num,reminder,result=0,org_num;
    printf("Enter the number = ");
    scanf("%d",&num);
    org_num=num;
    while(num!=0){
        reminder=num%10;
        result=result*10+reminder; 
        num=num/10;
    }
    /* How it's check
       1 4 1 -> num=141, reminder = 1, result=1, num=14
           1 -> num=14, reminder = 4, result=14, num=1 
         1 4 -> num=1, reminder = 1, result=141, num=0
       1 4 1 (resault = org_num) */
    if(org_num == result)
        printf("the number is palindrome! \n");
    else
        printf("number is not palindrome \n");
    return 0;
}