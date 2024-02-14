//war prorgram read the string in file without use fgets.
#include <stdio.h>

int main() {
    FILE *fp = NULL;
    char ch;
    fp = fopen ("fgetc.txt","r");

    while(!(feof(fp))){
        ch = fgetc(fp);
        printf("%c",ch);
    }
    
    fclose(fp);
    return 0;
}