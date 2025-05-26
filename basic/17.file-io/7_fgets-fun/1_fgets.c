//war prorgram read the string in file without use fgets.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    char str[50];
    fp = fopen ("fgets.txt","r");

    if( fp == NULL){
        printf("error");
        exit(1);
    }

    //make a while loop for print the content till end of file
    while(!(feof(fp))){
        fgets(str , 5 , fp);//it's print 5 character of string in console
        printf("%s",str);
    }
    
    fclose(fp);
    return 0;
}