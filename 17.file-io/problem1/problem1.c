//wap take string input from user and write in txt file 
#include <stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp = NULL;
    char str[50];
    char ch;

    fp = fopen("problem1.txt","w+");

    if(fp==NULL){
        printf("Error \n");
        exit(1);
    }

    printf("Enter the string : ");
    scanf("%[^\n]s",str);

    fputs(str,fp);

    rewind(fp); // move cursor to the beginning of text file
    
    //this loop will read the content in text
    while(!(feof(fp))){ //feof is mean end of file
        ch = fgetc(fp);
        printf("%c",ch);
    }
    
    fclose(fp);
    return 0;
}