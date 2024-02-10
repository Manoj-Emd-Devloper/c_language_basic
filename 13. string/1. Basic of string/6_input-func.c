#include <stdio.h>
int input(char str[],int n);

int main() {
    char str[100];
    printf("Enter the text or string : ");
    int n = input(str,100);
    printf("The length and string is of %d and %s \n", n , str);
    return 0;
}

int input(char str[], int n){
    int ch , i=0;

    //use of getchar take input from user and it's change the character value in ascii value. ('\n'=10)
    while ((ch=getchar()) != '\n'){
        if(i<n)
            str[i++]=ch;
    }
    str[i] = '\0';
    return i;
}