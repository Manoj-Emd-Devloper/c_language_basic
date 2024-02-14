#include <stdio.h>
#include <errno.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("hello.txt","r"); 

    if(fp==NULL){
        perror("Error opening of file");
        printf("Error num = %d \n",errno);
    }

    else{
        fputc ('aa',fp);
        if(ferror(fp)){
         perror("Error writing to hello.txt");
        }
        fclose(fp);
    }
    printf("successfully complation ! \n");
    return 0;
}

