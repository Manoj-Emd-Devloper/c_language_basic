#include <stdio.h>

int main() {
    // /* 
    {
    char s[10];
    printf("Enter the string : ");
    scanf("%s",s);//here it's use for read string into a string variable
    printf("%s",s);
    }
    // */

    /*
    {
    char s[10];
    printf("Enter the string : ");
    scanf("%9s",s);//To print the string till the  number of character allocated
    printf("%s",s);
    }
    */

    /*
    {
    char s[10];
    printf("Enter the string : ");
    gets(s);//it's useful to print the string even there whitespace. but it's overwrite the memory which is it's allocated.Make it unsafe.
    printf("%s",s);
    }
    */
    return 0;
}