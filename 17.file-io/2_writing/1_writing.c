//wap for write the text on the file.

#include <stdio.h>

int main() {
    FILE *ptr = NULL;
    char str[100] = "This is my new content and i want replace this content with writing.txt file text";
    
    ptr = fopen("writing.txt","w");
    fprintf(ptr , "%s" , str);// fprintf(ptr,"%s",string):used for write the content on file.either a character ,integer or float datatype
    return 0;
}
//here w (write) operation is perform for that first the content in file is erase and then program contain write in file