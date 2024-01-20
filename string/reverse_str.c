#include<stdio.h>
#include<string.h>

    void reverseString(char *str) {
        int length = strlen (str);
        for (int i=0,j=length-1;i<j;i++,j--){
            char temp=str[j];
            str[i]=str[j];
            str[j]=temp;
        }
    }
    
    int main(){    
        char str[]="hello world!";
        reverseString(str);
        printf("Reversed String:%s \n",str);
        return 0;
        }