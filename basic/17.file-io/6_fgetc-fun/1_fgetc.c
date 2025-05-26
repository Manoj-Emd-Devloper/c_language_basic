#include <stdio.h>

int main() {
    FILE *fp = NULL;
    char ch;
    fp = fopen("fgetc.txt","r");
    ch = getc(fp);//used for to read the single character from file
    printf("The first character is written in file is : %c \n",ch);
    fclose(fp);
    return 0;
}