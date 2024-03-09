// wap find last word length
#include <stdio.h>
#include <string.h>

int lastword_length(char *s);
int main()
{
    char *s = "hello world ";//this is string constant.
    //for user input use below
    //char s[]={0};
    // printf("Enter the string : ");
    // scanf("%[^\n]s", &s); //can't change string of string constant
    printf("The length of last word = %d \n", lastword_length(s));
    return 0;
}

int lastword_length(char *s)
{
    int len = strlen(s);
    int i, last = 0, space = 0;
    for (i = 0; i < len; i++)
    {
        if (s[i] == ' ')
            space = 1;
        else
        {
            if (space)
                last = 0;
            space = 0;
            last++;
        }
    }
    return last;
}