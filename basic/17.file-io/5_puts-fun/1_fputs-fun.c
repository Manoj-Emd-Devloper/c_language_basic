#include <stdio.h>

int main() {
    FILE *fp = NULL;
    char str[50] = "this is a string";
    fp = fopen("putstr.txt","a");
    fputs(str,fp);//used for to write/apend a string to file
    fclose(fp);
    return 0;
}