#include <stdio.h>

int main() {
    FILE *fp = NULL;
    char ch = 'A';
    fp = fopen("putc.txt","a");
    putc(ch,fp);//used for to write/apend a character to file
    fclose(fp);
    return 0;
}