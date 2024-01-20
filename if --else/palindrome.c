#include<stdio.h>
// resulted number is same if we reverse to that number
    int isPalidrome(int num){
        int original = num;
        int reversed = 0;
        while(num>0){
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        return original == reversed;
    }

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (isPalidrome(num)){
    printf("%d is a palindrome.\n",num);
    }
    else{
        printf("%d is not a palindrome. \n",num);
    }
        return 0;
}