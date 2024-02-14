//wap for write the text next to the file text.

#include <stdio.h>

int main() {
    FILE *ptr = NULL;
    char str[100] = "This is my new content and i want add this content with apend.txt file text.";
    ptr = fopen("apend.txt","a");
    fprintf(ptr , "%s" , str);
    fclose(ptr);
    return 0;
}
//here a (apend) operation is perform for that program contain write next to the contain of file
