#include <stdio.h>
#include<string.h>

int main() {
    char p[20];
    char *s = "string";
    int len = strlen(s);
    printf("len = %d \n", len);
    for(int i=0 ; i<len ; i++)
        p[i] = s[len - i];
    printf("p = %s \n" ,p);
    return 0;
}
// p[0] = '\0'
//output is not shown on the screen because when printf printed p[0] due to null character the execution is ended