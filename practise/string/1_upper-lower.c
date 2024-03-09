// wap to make all character of string to uppercase and lowercase string

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char text[30];
    printf("Enter the string : ");
    scanf("%[^\n]%*c", &text);
    printf("Entered string is : %s \n", text);
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = text[i] - 0x20;
    }
    printf("String in uppercase : %s \n", text);
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] = text[i] + 0x20;
    }
    printf("String in lowercase :%s \n", text);
    return 0;
}