#include <stdio.h>
#include <errno.h>
int main() {
    FILE *fp = NULL;
    fp = fopen("reading.txt","r"); 

    if(fp==NULL){
        perror("Error opening of file");
        printf("Error num = %d \n",errno);
    }
    fclose(fp);
    printf("successfully complation ! \n");
    return 0;
}

//we doing reading operation without the text file which name is reading.txt.
//it's return an error or null to pointer.
//then the perror is print the error and get number of error by errno