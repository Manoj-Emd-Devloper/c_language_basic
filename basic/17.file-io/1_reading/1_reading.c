//wap for read the content from the file.
#include <stdio.h>

int main() {
    FILE *ptr = NULL; //file pointer declaration
    char str[30];
    //opening a file and assign the address to the pointer. r is mode of operation perform on file
    ptr = fopen("reading.txt","r"); 
    fscanf(ptr , "%[^\n]s" , str);// fscanf(ptr,"%s",string):used for read the content of file 
    printf("the content is : %s \n" , str);
    fclose(ptr);//fclose used for close the file and free the space of ram from this file
    return 0;
} 