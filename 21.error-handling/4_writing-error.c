#include <stdio.h>
#include <errno.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("hello.txt","w"); 

    if(fp==NULL){
        perror("Error opening of file");
        printf("Error num = %d \n",errno);
    }

    else{
        fputc ('x',fp);
        if(ferror(fp)){
         perror("Error writing to hello.txt");
        }
        fclose(fp);
    }
    printf("successfully complation ! \n");
    return 0;
}

