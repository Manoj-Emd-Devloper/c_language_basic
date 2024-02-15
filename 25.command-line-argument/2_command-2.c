#include <stdio.h>

int main(int argc , char *argv[]) {
    
    if(argc == 1){
        printf("No extra comment line passed "
                "instead of file name \n \n");
    }

    printf("The name of first argument at index 0 = %s \n \n",argv[0]);

    if(argc>=2){
        printf("Total number of argument = %d \n \n",argc);
        printf("The passed argument after index 0 : \n");
        for(int i=1 ; i<argc ; i++){
            printf("The argument at index %d is = %s \n",i,argv[i]);
        }
    }
    
    return 0;
}