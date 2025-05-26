#include <stdio.h>

int main(int argc , char *argv[]) {
    printf("Total number of argument = %d \n \n",argc);

    printf("The passed argument are : \n");
    for(int i=0 ; i<argc ; i++){
    printf("The argument at index %d is = %s \n",i,argv[i]);
    }
    return 0;
}

//argc argument is count the number of argument passed by command
//argv (ARGument Vector) is an array of character pointers listing all the arguments.
//If argc is greater than zero, the array elements from argv[0] to argv[argc-1] will contain pointers to strings.
//argv[0] is the name of the program , After that till argv[argc-1] every element is command -line arguments.